/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <jhatting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:48:37 by jhatting          #+#    #+#             */
/*   Updated: 2024/08/25 23:13:27 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/* int main()
{
	int a;
	int b;
	
	a = 18;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("div : %d\n", a);
	printf("mod : %d\n", b);
} */
