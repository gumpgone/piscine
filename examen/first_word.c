#include <unistd.h>

int main(int argc, char **argv)
{	
	int i;
	int debut;
	int fin;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		debut = i;
		while (argv[1][i] > 32 && argv[1][i] < 127)
			i++;
		fin = i;
		while (debut < fin)
		{
			write(1, &(argv[1][debut]), 1);
			debut++;
		}
		write(1, "\n", 1);
	}	
	else
		write(1, "\n", 1);
}
