/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:34:24 by rmorais           #+#    #+#             */
/*   Updated: 2022/07/18 15:46:32 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	if (ac > 0)
	{
		while (j >= 1)
		{
			i = 0;
			while (av[j][i] != '\0')
			{
				write (1, &av[j][i], 1);
				i++;
			}
			write (1, "\n", 1);
			j--;
		}
	}
	return (0);
}
