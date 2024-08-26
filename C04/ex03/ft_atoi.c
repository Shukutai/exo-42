/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhatting <jhatting@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 02:25:25 by jhatting          #+#    #+#             */
/*   Updated: 2024/08/25 03:12:37 by jhatting         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int negatif;
	int result;

	i = 0;
	negatif = 1;
	result = 0;
	while(str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-' )
			negatif *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result * negatif);
}
#include <stdio.h>
int main()
{
	char str[50] = " \n\r\t\v\f-+---+---124845";
	printf("%d\n", ft_atoi(str));
}
