#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while ( str[i] != '\0')
    {
        if (!((str[i] >= 'A' && str[i] <= 'Z')))
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
    printf("TACAPTER : %d\n", ft_str_is_numeric("TACAPTER"));
    printf(" %d\n", ft_str_is_numeric(""));
}