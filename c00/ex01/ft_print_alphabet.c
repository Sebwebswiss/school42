/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:07:45 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/12 11:26:46 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	lett;

	lett = 'a';
	while (lett <= 'z')
	{
		write(1, &lett, 1);
		lett++;
	}
}
