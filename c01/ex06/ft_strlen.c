/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:43:39 by rmorais           #+#    #+#             */
/*   Updated: 2022/07/05 17:08:57 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{	
	int	a;

	a = 0;
	while (str[a] != '\0')
	{	
		a++;
	}
	return (a);
}
