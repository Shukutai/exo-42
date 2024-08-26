/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <jhatting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:20:26 by jhatting          #+#    #+#             */
/*   Updated: 2024/08/25 22:58:10 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/* int main()
{
    printf("1234 : %d\n", ft_str_is_printable("1234Ĳ"));
    printf("delete : %d\n", ft_str_is_printable("delete"));
    printf("TaCapter^^ : %d\n", ft_str_is_printable("TaCapter^^"));
    printf(" %d\n", ft_str_is_printable(""));
} */