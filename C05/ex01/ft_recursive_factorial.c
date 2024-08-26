/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <jhatting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 03:54:55 by jhatting          #+#    #+#             */
/*   Updated: 2024/08/26 05:15:43 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (ft_recursive_factorial (nb - 1) * nb);
}
/* #include <stdio.h>
int main()
{
    printf("%d\n", ft_recursive_factorial(5));
} */