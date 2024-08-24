#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

    i = 0;
    while (s1[i] == s2[i] && s1[i] !='\0' && s2[i] !='\0' && i < n)
	{
		i++;
	}
	if ( i == n )
		return 0;
	return s1[i] - s2[i];
}
int main()
{
	char s1[] = "tacapterles";
	char s2[] = "tacapterle";
    int resultat = ft_strncmp(s1,s2,15);
	printf(" %d\n ", resultat);
}