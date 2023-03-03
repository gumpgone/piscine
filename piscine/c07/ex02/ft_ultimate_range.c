/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 23:01:05 by wkhattab          #+#    #+#             */
/*   Updated: 2023/02/27 13:51:02 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (-1);
	*range = tab;
	while (min < max)
	{
		tab[i] = min;
		min ++;
		i++;
	}
	return (size);
}
