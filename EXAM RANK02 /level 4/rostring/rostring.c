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
        if(str[i] != ' ' && str[i] != '\t')
        {
            int k = 0;
            a[j] = (char*)malloc(sizeof(char*) * 100); 
            while (str[i] != ' ' && str[i] != '\t' && str[i])
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
    int i = 1;
    char **tab;

    if(ac > 1)
    {
        tab = ft_split(av[1]); 
        while(tab[i])
        {
           ft_putstr(tab[i]);
           write(1, " ", 1);
           i++;
        }
        ft_putstr(tab[0]);
        write(1, "\n", 1);
    }
    write(1, "\n", 1);
    return(0);
}