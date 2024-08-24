#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while ( str[i] != '\0')
    {
        if (!((str[i] >= '0' && str[i] <= '9')))
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int main()
{
    printf("1234 : %d\n", ft_str_is_numeric("1234"));
    printf("tacapter : %d\n", ft_str_is_numeric("tacapter"));
    printf("TaCapter^^ : %d\n", ft_str_is_numeric("TaCapter^^"));
    printf(" %d\n", ft_str_is_numeric(""));
}

