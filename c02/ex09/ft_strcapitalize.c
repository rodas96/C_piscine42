/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 01:37:02 by rmorais           #+#    #+#             */
/*   Updated: 2022/07/10 16:16:10 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	caps;

	i = 0;
	caps = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str [i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (caps && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = (str[i] -32);
			else if (!caps && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = (str[i] + 32);
				caps = 0;
		}
		else
		caps = 1;
		i++;
	}
	return (str);
}
