#include <stdio.h>

int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while    (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char *str;

    str = "carre\n";
    ft_strlen(str);
    printf("str : %d\n", ft_strlen(str));
}