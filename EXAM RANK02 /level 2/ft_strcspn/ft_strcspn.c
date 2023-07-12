#include <string.h>

size_t	ft_strcspn(const char *s, const char *rej)
{
    int i = 0;
    int j = 0;

    while (s[i] != '\0')
    {
        j = 0;
        while(rej[j] != '\0')
        {
        if (s[i] == rej[j])
            return(i);
        j++;
        }
        i++;
    }
    return(i);
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[] = "Hello, world!";
//     char charset[] = " ,!";

//     // strcspn() örneğidfögllöhşrög
//     size_t span = ft_strcspn(str1, charset);
//     printf("strcspn: %zu\n", span); // çıktı: 5 (H, e, l, l, o karakterleri charset'de geçmemektedir)

//     return 0;
// }