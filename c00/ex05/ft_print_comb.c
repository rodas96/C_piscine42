/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_print_comb.c									:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rmorais <rmorais@student.42lisboa.com>	 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2022/06/30 23:00:04 by rmorais		   #+#	#+#			 */
/*   Updated: 2022/07/02 16:35:41 by rmorais		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	c[3];

	c[0] = '0';
	while (c[0] <= '7')
	{
		c[1] = c[0] + 1;
		while (c[1] <= '8')
		{
			c[2] = c[1] + 1;
			while (c[2] <= '9')
			{
				ft_putchar(c[0]);
				ft_putchar(c[1]);
				ft_putchar(c[2]);
				if (!(c[0] == '7' && c[1] == '8' && c[2] == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				c[2]++;
			}
			c[1]++;
		}
		c[0]++;
	}
}
