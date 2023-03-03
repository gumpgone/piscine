/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 14:00:48 by wkhattab          #+#    #+#             */
/*   Updated: 2023/02/13 14:50:58 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{	
	int	i;
	int	save;

	i = 0;
	while (i < size / 2)
	{	
		save = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = save;
		i++;
	}
}
