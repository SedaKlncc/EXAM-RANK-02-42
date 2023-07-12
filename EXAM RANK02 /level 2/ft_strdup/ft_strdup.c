#include <string.h>
#include <stdio.h>
#include <stdlib.h> 
char    *ft_strdup(char *src)
{
    char *a;
    int i = 0;

    while(src[i] != '\0')
    i++;

    a = (char *)malloc(sizeof (char) * i + 1 );
    
        if (a == NULL)
            return(NULL);
        i = 0;

    while(src[i] != '\0')
    {
        a[i] = src[i];
        i++;
    }
    a[i] = '\0';
        return (a);
}
// int main ()
// {
//     char a[] = "ssss";
//     printf("%s", ft_strdup(a));
// }