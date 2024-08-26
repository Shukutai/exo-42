/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <jhatting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 02:47:02 by jhatting          #+#    #+#             */
/*   Updated: 2024/08/26 03:39:04 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	else if (power > 0)
		return (ft_recursive_power (nb, power - 1) * nb);
	return (nb);
}
/* #include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_power(3, 2));
} */