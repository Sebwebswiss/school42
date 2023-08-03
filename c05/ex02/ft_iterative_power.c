/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:19:00 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/24 20:40:41 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	nb_copy;

	nb_copy = nb;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (power > 1)
	{
		nb *= nb_copy;
		power--;
	}
	return (nb);
}
/*

int main()
{
	printf("%d", ft_iterative_power(3,3));
	return 0;
}
*/
