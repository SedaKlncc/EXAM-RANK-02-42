#include <unistd.h>

int	    is_power_of_2(unsigned int n)
{
    if( n == 0 )
    return(0);
    
    if(n % 2 == 0 || n == 1)
    {
        return(1);
    }
    return(0);
}

// #include <stdio.h>
// int main()
// {
//     int a = 1;
//     printf("%d", is_power_of_2(a));
// }