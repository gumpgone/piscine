/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboukria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 15:05:14 by bboukria          #+#    #+#             */
/*   Updated: 2023/02/26 15:05:17 by bboukria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	else
		return (nb * (ft_recursive_power(nb, power - 1)));
}

int	number_digit(int nb)
{
	int	count;

	count = 0;
	while (nb > ft_recursive_power(10, count))
		count++;
	return (count);
}

void	make_number(int i, int iter, char *res, int nb)
{	
	int	save;

	while (iter > 0)
	{
		save = nb;
		while (nb > 10)
		{
			nb = nb / 10;
		}
		res[i] = nb + '0';
		i++;
		nb = save - nb * (ft_recursive_power(10, iter - 1));
		iter--;
	}
}

char	*itoa(int nb)
{	
	char	*res;
	int		i;
	int		iter;

	res = malloc(sizeof(char) * 11);
	if (!res)
		return (0);
	i = 0;
	iter = number_digit(nb);
	if (nb < 0)
	{
		res[i] = '-';
		nb = -nb;
		i++;
	}
	make_number(i, iter, res, nb);
	return (res);
}
