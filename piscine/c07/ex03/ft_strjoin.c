/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 17:33:45 by wkhattab          #+#    #+#             */
/*   Updated: 2023/03/01 02:42:44 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	calcul_size(char**strs, char *sep, int size)
{
	int	i;
	int	somme;

	somme = 0;
	i = 0;
	while (i < size)
	{
		somme += ft_strlen(strs[i]);
		if (i < size - 1)
			somme += ft_strlen(sep);
		i++;
	}
	return (somme);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*strf;
	char	*res;

	strf = malloc(sizeof(char) * calcul_size(strs, sep, size) + 1);
	res = strf;
	if (!strf)
		return (0);
	if (size == 0)
		return (0);
	i = 0;i
	while (i < size)
	{
		ft_strcpy(strf, strs[i]);
		strf += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(strf, sep);
			strf += ft_strlen(sep);
		}
		i++;
	}
	*strf = '\0';
	return (res);
}

int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}
