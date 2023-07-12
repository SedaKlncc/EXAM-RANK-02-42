#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int i = 2;
    int nb1;
    int nb2;
    int res = 1;
    if(ac == 3)
    {
        nb1 = atoi(av[1]);
        nb2 = atoi(av[2]);

        while(nb1 >= i && nb2 >= i)
        {
            if(nb2 % i == 0 && nb1 % i == 0)    
            {
                res = i;
            }
            i++;
        }
        printf("%d",res);
    }
   printf("\n");
    return(0); 
}