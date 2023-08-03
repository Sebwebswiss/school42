/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 22:49:17 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/24 20:47:49 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 || power == 0)
		return (1);
	else
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
}
