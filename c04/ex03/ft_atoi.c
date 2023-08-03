/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:50:43 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/19 19:12:36 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char	*str)
{
	int	rez;
	int	sign;
	int	min;

	rez = 0;
	sign = 1;
	min = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
	str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			min++;
		str++;
	}
	if (min % 2 != 0)
	{
		sign = -1;
	}
	while (*str >= '0' && *str <= '9')
	{
		rez = rez * 10 + *str - '0';
		str++;
	}
	return (rez * sign);
}
