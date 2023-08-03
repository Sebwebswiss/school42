/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:49:56 by sezunec           #+#    #+#             */
/*   Updated: 2023/08/03 15:02:03 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	square;

	i = 1;
	if (nb < 0)
		return (0);
	while (1)
	{
		square = i * i;
		if (square == nb)
			return (i);
		else if (square > nb || square < 0)
			break ;
		i++;
	}
	return (0);
}
