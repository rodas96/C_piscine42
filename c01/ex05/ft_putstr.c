/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:42:38 by rmorais           #+#    #+#             */
/*   Updated: 2022/07/05 16:54:45 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{	
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
	i++;
	}
}
/*int	main(void)
{
	char *str = "alow galera\n";

	ft_putstr(str);
	return (0);
}*/
