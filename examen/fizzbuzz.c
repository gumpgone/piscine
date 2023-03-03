#include <unistd.h>

int main()
{
	int i;
	char c;

	i = 1;
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1,"fizzbuzz", 9);
		else if (i % 3 == 0)
			write(1,"fizz", 5);
		else if (i % 5 == 0)
			write(1,"buzz", 5);
		else
		{
			if (i > 10)
			{
				c = i / 10 + '0';
				write(1, &c, 1);
			}
			c = i % 10 + '0';
			write(1, &c, 1);
		}
		write(1, "\n", 1);
		i++;
	}
}
