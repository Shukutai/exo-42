#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int c;

	i = 0;
	c = 0;
	while ( dest[i] !='\0')
	{
		i++;
	}
	while ( src[c] != '\0')
	{
		dest[i] = src [c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return dest;
}
int main()
{
	char dest[25] = "tacapter\n";
	char src[] = "gcapter\n";
	printf("%s\n", ft_strcat(dest,src));
}