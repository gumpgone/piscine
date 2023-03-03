/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:03:54 by wkhattab          #+#    #+#             */
/*   Updated: 2023/02/12 16:10:43 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	dd(int nbr)
{
	char	a;
	char	b;

	a = nbr / 10 + '0';
	write(1, &a, 1);
	b = nbr % 10 + '0';
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 100)
	{	
		y = x + 1;
		while (y < 100)
		{
			if (x != y)
			{
				if (x < y)
				{
					dd(x);
					write(1, " ", 1);
					dd(y);
					if (!(x == 98 && y == 99))
						write(1, ", ", 2);
				}
			}
		y++;
		}
		x++;
	}
}	
