#include <unistd.h>
#include <stdio.h>

int main(int ac , char **av)
{
	int i;
	int j;
	char *c;

	i = 0;
	j = 0;
	if (ac > 1)
	{
		while (av[i])
			i++;
		while (av[i - 1][j])
			j++;
		c = av[i - 1];
		write(1, c, j);
	}
	write(1, "\n", 1);
}
