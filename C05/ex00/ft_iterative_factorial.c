/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <jhatting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 03:37:51 by jhatting          #+#    #+#             */
/*   Updated: 2024/08/26 01:04:35 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	if (nb < 0)
		return (0);
	return (result);
}
/* #include <stdio.h>
int main()
{
    printf("%d\n", ft_iterative_factorial(5));
} */