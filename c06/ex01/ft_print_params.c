/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <sezunec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:01:29 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/20 17:09:10 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
