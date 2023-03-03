int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}
char    *ft_strrev(char *str)
{
	int i;
	int size;
	char temp;

	i = 0;
	size = ft_strlen(str) - 1;
	while (i < size/2)
	{
		temp = str[i];
		str[i] = str[size - i];
		str[size - i] = temp;
		i++;
	}
	return str;
}
