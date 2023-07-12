#include <unistd.h>
int ft_atoi(char *str)
{
    int i = 0;
    int res;
    while(str[i])
  {
    res *= 10;
    res += str[i] - '0';
    i++;
  }  
  return(res);
}

void printhex(int nb)
{
   char hex[] = "0123456789abcdef";

   if(nb >= 16)
   printhex(nb /16);
   write(1, &hex[nb % 16], 1);

}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        printhex(ft_atoi(av[1]));
    }
    write(1, "\n", 1);
}