/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <jhatting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 04:26:30 by jhatting          #+#    #+#             */
/*   Updated: 2024/08/26 05:10:41 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	resultat;

	i = 1;
	resultat = nb;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	while (i < power)
	{
		resultat = resultat * nb;
		i++;
	}
	return (resultat);
}
/* #include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_power(3, 2));
} */