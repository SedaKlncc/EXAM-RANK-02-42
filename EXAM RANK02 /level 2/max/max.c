int		max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int a = tab[i];

    while(len > i)
    {       
        if(tab[i] > tab[i + 1])
        {    
            if(a < tab[i])
            a = tab[i];
        }
        i++;

    }
    return(a);
}

#include <stdio.h>
int main()
{
    int a[100] = {82, 45, 37, 94};
    unsigned int b = 4;
    printf("%d", max(a, b));
}