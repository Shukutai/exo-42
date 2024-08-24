#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while ( str[i] != '\0')
    {
        if (!((str[i] >= 32 && str[i] <= 126)))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    printf("1234 : %d\n", ft_str_is_printable("1234"));
    printf("delete : %d\n", ft_str_is_printable("delete"));
    printf("TaCapter^^ : %d\n", ft_str_is_printable("TaCapter^^"));
    printf(" %d\n", ft_str_is_printable(""));
}