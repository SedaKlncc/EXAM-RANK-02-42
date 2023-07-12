#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}


char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    char **a = (char**)malloc(sizeof(char*) * 100);

    while(str[i] == ' ' || str[i] == '\t')
    i++;
    while(str[i] != '\0')
    {
        if(str[i] > 32 )
        {
            int k = 0;
            a[j] = (char*)malloc(sizeof(char) * 100);
            while(str[i] > 32)
            {
                a[j][k] = str[i];
                i++;
                k++;
            }
            a[j][k] = '\0';
            j++;
        }
        else
        i++;
    }
    a[j] = 0;
    return(a);
}

int main(int ac, char **av)
{
    int i = 0;
    char **rev;
    if(ac == 2)
    {
        rev = ft_split(av[1]);
        while(rev[i] != NULL )
        {
            i++;
        }
        i--;
        while(i >= 0)
        {
            ft_putstr(rev[i]);
           if(i > 0)
           write(1, " ", 1);
           
            i--;
        }
    }
    write(1, "\n", 1);
    return(0);
}