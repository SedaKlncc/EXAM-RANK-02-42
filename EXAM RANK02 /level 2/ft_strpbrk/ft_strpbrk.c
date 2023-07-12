#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;

if (!s1 || !s2)
	{
		return (0);
	}
    while (s1[i] != '\0')
    {
        j = 0;
        while(s2[j] != '\0')
        {
            if(*s1 == s2[j])
            return (char *) s1;
            j++;
        }
        s1++;
        i++;
    }
    return(NULL);
}
//  #include <stdio.h>
//  #include <string.h>

//   int		main(void)
// {
// 	char a[]= "merhaba";
//     char b[] = "r";
//     printf("%s", ft_strpbrk(a,b));

// }