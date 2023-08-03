/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:59:31 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/24 20:48:19 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
	}
}
