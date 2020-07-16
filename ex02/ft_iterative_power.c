/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fapatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:39:37 by fapatel           #+#    #+#             */
/*   Updated: 2020/07/16 12:29:22 by fapatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_iterative_power(int nb, int power)
{		
	int result = 1;
	if (power < 0 )
		return (0);
	if (power == 0)
		return (1);
	while ( power != 0 )
	{
		result = result * nb;
		--power;
	}
		return (result);
}
