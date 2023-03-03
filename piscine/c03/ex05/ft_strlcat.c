/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:10:18 by wkhattab          #+#    #+#             */
/*   Updated: 2023/02/21 19:11:20 by wkhattab         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{	
	unsigned int	i;
	unsigned int	j;
	unsigned int	save;

	j = ft_strlen(dest);
	i = 0;
	while (src[i] && (j + i + 1) < size)
	{
		dest[j + i] = src[i];
		i++;
	}
	if (!src[j])
		dest[i + j] = 0;
	save = i;
	i = ft_strlen(src);
	if (size == 0)
		return (j);
	if (j < size)
	{
		dest[save + j] = 0;
		return (i + j);
	}
	return (size + i);
}
