#include <stdio.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int c;

    i = 0;
    c = 0;
    while ( dest[c] !='\0' )
    {
		c++;
	}   
	while ( src[i] !='\0' && i < nb )
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return dest;
}
int main()
{
	char dest[30] = "tacapter";
	char src[] = "wegcapter";
	printf("%s\n", ft_strncat(dest,src,5));
}
