#include <string.h>

char    *ft_strrev(char *str)
{
    int len = 0;
    char tmp;
    int j = 0;
    
    while (str[len] != '\0')
    {
        len++;
    }
    len--;
    while (len > j)
    {
        tmp = str[len];
        str[len] = str[j];
        str[j] = tmp;
        len--;
        j++;
    }
    return(str);
}
// #include <stdio.h>
// int main ()
// {
//     char a[] = "selm";
//     printf("%s", ft_strrev(a));
// }