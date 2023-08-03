/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 23:33:24 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/30 14:25:32 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*res;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	res = (int *) malloc(size * sizeof(int ));
	if (res == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
