/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <jhatting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:17:49 by jhatting          #+#    #+#             */
/*   Updated: 2024/08/26 00:45:22 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>  */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/* int main()
{
    printf("1234 : %d\n", ft_str_is_uppercase("1234"));
    printf("tacapter : %d\n", ft_str_is_uppercase("tacapter"));
    printf("TACAPTER : %d\n", ft_str_is_uppercase("TACAPTER"));
    printf(" %d\n", ft_str_is_uppercase(""));
} */