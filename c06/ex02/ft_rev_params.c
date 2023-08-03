/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezunec <sezunec@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:35:53 by sezunec           #+#    #+#             */
/*   Updated: 2023/07/20 16:59:47 by sezunec          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
