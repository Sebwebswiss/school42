/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:40:27 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/12 18:28:41 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	if (i != '7' || j != '8' || k != '9' )
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
