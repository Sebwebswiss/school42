/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 20:15:09 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/30 20:24:31 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

char	*ft_strdup(char	*src)
{
	int		len;
	int		i;
	char	*new;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	new = (char *) malloc(len +1);
	if (new == 0)
		return ("error");
	i = 0;
	while (src[i] != '\0')
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
