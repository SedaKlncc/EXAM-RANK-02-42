#include <unistd.h>

int main (int ac, char **av)
{
    int i = 0;
    char b;

    if (ac == 2)
    {
        while (av[1][i] != '\0')
        {
            if(av[1][i] >= 65 && av[1][i] <= 90)
            {
                b = 90 - av[1][i] + 65;
            }
            else if (av[1][i] >= 97 && av[1][i] <= 122)
            {
                b= 122 - av[1][i] + 97;
            }
             write(1, &b, 1);
        i++;
        }
    }
    write(1, "\n", 1);
}