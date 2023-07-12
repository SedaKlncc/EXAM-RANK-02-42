#include <string.h>

size_t	ft_strspn(const char *s, const char *acc)
{
    size_t i = 0;
    size_t j = 0;
    int a = 0;

    while (s[i] != '\0')
    {
        j = 0;

        while(acc[j] != '\0')
        {
            if (s[i] == acc[j])
            {
                i++;
                while (s[i] != '\0')
                {
                    i++;
                    a++;
                }
               
            }
             j++;
            
        }
        i++;
    }
    return(a);
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[] = "Hello, world!";
//     char charset[] = " ,!";

//     // strcspn() örneği
//     size_t span = ft_strspn(str1, charset);
//     printf("strspn: %zu\n", span); // çıktı: 5 (H, e, l, l, o karakterleri charset'de geçmemektedir)

//     return 0;
// }