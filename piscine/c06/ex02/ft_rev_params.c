/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:17:10 by wkhattab          #+#    #+#             */
/*   Updated: 2023/02/26 16:43:13 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{	
	int		j;
	char	c;
	int		i;

	i = 0;
	while (argc - 1 - i > 0)
	{	
		j = 0;
		while (argv[argc - 1 - i][j])
		{
			c = argv[argc - 1 - i][j];
			write(1, &c, 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
