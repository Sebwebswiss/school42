/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:15:17 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/24 20:47:01 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	pro;

	if (nb < 0)
		return (0);
	i = 1;
	pro = 1;
	while (i <= nb)
	{
		pro *= i;
		i++;
	}
	return (pro);
}
