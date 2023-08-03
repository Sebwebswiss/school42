/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:57:22 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/30 18:04:53 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_make_str(int size, char	**strs, char	*sep)
{
	char	*str;
	int		total_len;
	int		i;

	total_len = 0;
	i = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen(sep) * size -1;
	if (size <= 0)
		total_len = 1;
	str = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!str)
	{
		return (0);
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	str = ft_make_str(size, strs, sep);
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size -1)
		{
			str[k++] = sep[j];
			j++;
		}
	}
	str[k] = '\0';
	return (str);
}
