/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhattab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 00:40:36 by wkhattab          #+#    #+#             */
/*   Updated: 2023/03/02 09:34:27 by wkhattab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	test_char(char c, char *sep)
{
	int i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (0);
		sep++;
	}
	return (1);
}

int	ft_super_strlen(char *str, char *sep)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (test_char(str[i], sep))
		words++;
	while (str[i])
	{
		if (test_char(str[i], sep) && i > 0 && !test_char(str[i - 1], sep))
			words++;
		i++;
	}
	return (words);
}

void	add_in_str(char **strs, char *str, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = -1;
	k = -1;
	while (str[++i])
	{
		if (test_char(str[i], sep))
		{
			j = 0;
			while (str[i + j] && test_char(str[i + j], sep))
				j++;
			strs[++k] = malloc(sizeof(char) * (j + 1));
			l = j;
			strs[k][j--] = '\0';
			while (j >= 0)
			{
				strs[k][j] = str[i + j];
				j--;
			}
			i += l;
		}
	}
}

int	test_str(char *str, char *sep)
{
	int	i;

	if (str[0] == '\0')
		return (0);
	i = 0;
	while (str[i] && !test_char(str[i], sep))
		i++;
	if (str[i] == '\0')
		return (0);
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		words;

	if (test_str(str, charset) == 0)
		words = 0;
	else
		words = ft_super_strlen(str, charset);
	strs = malloc(sizeof(char *) * (words + 1));
	if (words > 0)
		add_in_str(strs, str, charset);
	strs[words] = 0;
	return (strs);
}
