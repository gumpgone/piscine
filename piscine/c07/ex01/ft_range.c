/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:40:37 by wkhattab          #+#    #+#             */
/*   Updated: 2023/02/27 13:50:29 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*tab;

	if (min >= max)
		return (tab = NULL);
	i = 0;
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (0);
	while (min < max)
	{
		tab[i] = min;
		min ++;
		i++;
	}
	return (tab);
}
