/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <jhatting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 00:50:16 by jhatting          #+#    #+#             */
/*   Updated: 2024/08/26 00:55:32 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[c])
	{
		dest[i] = src [c];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (dest);
}
/* int main()
{
	char dest[25] = "tacapter\n";
	char src[] = "gcapter\n";
	printf("%s\n", ft_strcat(dest,src));
} */