/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 16:15:57 by wkhattab          #+#    #+#             */
/*   Updated: 2023/02/12 16:16:18 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);
void	print(char a, char b, char c);

void	ft_print_comb(void)
{	
	char	i;
	char	j;
	char	m;

	i = 47;
	while (i < 55)
	{	
		i++;
		j = 47;
		while (j < 56)
		{	
			j++;
			m = 47;
			while (m < 57)
			{
				m++;
				if (i != j && i != m && m != j)
				{	
					if (i < j && i < m && j < m)
						print(i, j, m);
				}
			}
		}	
	}	
}

void	print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(a == '7' && b == '8' && c == '9'))
		write(1, ", ", 2);
}
