/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fapatel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 10:14:46 by fapatel           #+#    #+#             */
/*   Updated: 2020/07/14 15:48:30 by fapatel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

int ft_iterative_factorial(int nb)

{
	int factorial;
	int i;

	if (nb < 0 || nb > 14)
	return(0);

/*	else if (nb < 0 );
	return(0);*/

	factorial = 1;
	i = 2;

	while (i <= nb)
	{
	  factorial *= i;
	  i++;
	}
	return (factorial);
}	
