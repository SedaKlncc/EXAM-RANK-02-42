#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;

    if (ac == 2)
    {
        while (av[1][i] <= 32)
            i++;
        while (av[1][i])
        {
            if(av[1][i] && av[1][i] <= 32)
            {
                if (av[1][i + 1] && av[1][i + 1] > 32)
                    write(1, "   ", 3);
            }
            else
                write(1, &av[1][i], 1);
            i++;
        }
    }
   write(1, "\n", 1);
}