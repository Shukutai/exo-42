/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <jhatting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:39:35 by jhatting          #+#    #+#             */
/*   Updated: 2024/08/25 23:13:25 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/* int	main(void)
{
	int a = 32;
	int b = 15;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("div : %d\n", div);
	printf("mod : %d\n", mod);
} */