#include <stdlib.h>

char	**ft_split(char *str)
{
    int i = 0;
    int j = 0;
    char **a = (char**)malloc(sizeof(char*) * 1000);

    while(str[i] == ' ' && str[i] == '\t')
        i++;
    while(str[i] != '\0')
    {

        if(str[i] != ' ' && str[i] != '\t')
        {
            int k = 0;
            a[j] = (char*)malloc(sizeof(char) * 1000);
            while(str[i] != ' ' && str[i] != '\t' && str[i] != ' \0')
            {
                a[j][k] = str[i];
                k++;
                i++;
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