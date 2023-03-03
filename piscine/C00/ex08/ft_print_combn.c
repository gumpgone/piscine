/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 20:42:00 by wkhattab          #+#    #+#             */
/*   Updated: 2023/03/01 21:00:41 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write(1, &c, 1);
	}
}

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

int	test_sort(int nb, int nb_digits)
{
	int	a;
	int	b;
	int	save;

	if (nb < 10)
		return (1);
	save = nb;
	while (0 < nb_digits - 1)
	{
		while (nb > 10)
			nb = nb / 10;
		a = nb;
		nb = save - a * (ft_recursive_power(10, --nb_digits));
		save = nb;
		while (nb > 10)
			nb = nb / 10;
		b = nb;
		if (a > b || a == b)
			return (0);
	}
	return (1);
}

void	display_number(int n, int j, int size, int i)
{
	while (n - j++ > 0)
		write(1, "0", 1);
	ft_putnbr(i);
	if (123456789 % size != i)
		write(1, ", ", 2);
	else
		write(1, "\n", 1);
}

void	ft_print_combn(int n)
{
	int	i;
	int	size;
	int	size_d;
	int	save;

	size = ft_recursive_power(10, n);
	i = 0;
	while (i < size)
	{
		size_d = 1;
		save = i;
		while (i / ft_recursive_power(10, size_d) > 0)
			size_d++;
		if (test_sort(i, size_d))
			display_number(n, size_d, size, i);
			i++;
	}
}
