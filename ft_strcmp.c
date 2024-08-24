// #include <stdio.h>
// #include <string.h>

// int		ft_strcmp(char *s1, char *s2)
// {
// 	int i;
	
// 	i = 0;
// 	while (s1[i] !='\0' && s2[i] !='\0')
// 	{
// 		if (s1[i] != s2[i])
// 		{
// 			return s1[i] - s2[i];
// 		}
// 		i++;
// 	}
// 	return s1[i] - s2[i];
// }
	
// int main()
// {
// 	char s1[] = "Ab";
// 	char s2[] = "DoE";
// 	printf("%d\n", ft_strcmp(s1,s2));
// }

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int main()
{
	char s1[10] = "aedy";
	char s2[10] = "dexx";
	int resultat = ft_strcmp(s1,s2);
	printf("%d\n", resultat);
}