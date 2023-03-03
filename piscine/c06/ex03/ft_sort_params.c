/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:18:40 by wkhattab          #+#    #+#             */
/*   Updated: 2023/02/21 22:27:51 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(char **a, char **b)
{
	char	*save_b;

	save_b = *a;
	*a = *b;
	*b = save_b;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr( char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	write(1, str, i);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{	
	int	i;
	int	j;
	int	min;
	int	init;

	init = 0;
	i = 1;
	while (i < argc - 1)
	{
		min = i;
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[min], argv[j]) > 0)
				min = j;
			j++;
		}
		ft_swap(&argv[min], &argv[i]);
		i++;
	}
	while (++init < argc)
		ft_putstr(argv[init]);
	return (0);
}
