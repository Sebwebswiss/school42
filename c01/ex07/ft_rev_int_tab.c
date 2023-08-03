/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:55:18 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/14 13:49:46 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	r;
	int	swap;

	i = 0;
	r = size -1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[r];
		tab[r] = swap;
		i++;
		r--;
	}
}
