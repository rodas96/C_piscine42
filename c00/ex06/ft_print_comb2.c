/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 16:45:52 by rmorais           #+#    #+#             */
/*   Updated: 2022/07/04 15:09:37 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putint(int n)
{
	char	c1;
	char	c2;

	c1 = n / 10 + '0';
	c2 = n % 10 + '0';
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_printcomb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			putint(a);
			write(1, " ", 1);
			putint(b);
			if (!(a == 98 && b == 99))
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
