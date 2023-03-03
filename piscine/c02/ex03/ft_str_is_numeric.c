/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:50:55 by wkhattab          #+#    #+#             */
/*   Updated: 2023/02/20 11:33:32 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	counter;
	int	res;

	counter = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] > 47 && str[i] < 58)
			counter++;
		i++;
	}
	if (counter == ft_strlen(str))
		res = 1;
	else
		res = 0;
	return (res);
}
