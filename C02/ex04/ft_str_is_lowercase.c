/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <jhatting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:15:33 by jhatting          #+#    #+#             */
/*   Updated: 2024/08/26 00:43:09 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
 */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/* int main()
{
    printf("1234 : %d\n", ft_str_is_lowercase("1234"));
    printf("tacapter : %d\n", ft_str_is_lowercase("tacapter"));
    printf("TaCapter^^ : %d\n", ft_str_is_lowercase("TaCapter^^"));
    printf(" %d\n", ft_str_is_lowercase(""));
} */