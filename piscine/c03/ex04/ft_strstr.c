/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 10:20:52 by wkhattab          #+#    #+#             */
/*   Updated: 2023/02/21 19:10:40 by wkhattab         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	count;

	if (!str || !to_find)
		return (0);
	i = 0;
	if (!(to_find[0]))
		return (str);
	while (str[i])
	{	
		count = 0;
		j = 0;
		while (j < ft_strlen(to_find))
		{
			if (str[j + i] == to_find[j])
				count++;
			j++;
		}
		if (count == ft_strlen(to_find))
			return (str + i);
		i++;
	}
	return (0);
}
