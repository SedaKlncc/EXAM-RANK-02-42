#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
    int len = 0;
    int a = nbr;
    char *b;
if(nbr == -2147483648)
{
    return("-2147483648\0");
}
    if(nbr < 0)
    len++;
    while(a)
    {
        a /= 10;
        len++;
    }
    b = (char *)malloc(sizeof(char) * len +1);
    if(b == NULL)
    return(NULL);
    
    b[len] = '\0';
    if(nbr < 0)
    {
        b[0] = '-';
        nbr *= -1; 
    }
    if(nbr == 0)
    {
        b[0] = '0';
        return(b);
    }
    while(nbr)
    {
        b[--len] = nbr % 10 + '0';
        nbr /= 10;
      
    }
return(b);
}

// int main()
// {
//     int a = -12;
//     char *z = ft_itoa(a);
//     printf("%s", z);
// }
