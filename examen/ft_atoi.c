
int ft_atoi(char *str)
{
	int i;
	int n;
	int r;

	n = 0;
	r = 0;
	i = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	if (n > 0)
		return (-r);
	return (r);
}
