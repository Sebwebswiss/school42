/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:36:32 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/24 20:47:21 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
	res = nb * ft_recursive_factorial(nb -1);
	}
	return (res);
}
