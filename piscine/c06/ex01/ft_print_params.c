/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:15:56 by wkhattab          #+#    #+#             */
/*   Updated: 2023/02/26 16:42:37 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{	
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < argc - 1)
	{	
		j = 0;
		while (argv[i + 1][j])
		{
			c = argv[i + 1][j];
			write(1, &c, 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
