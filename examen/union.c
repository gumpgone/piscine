#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return i;
}
int test(char*str, char lettre, int i)
{
	while(i > 0)
	{	
		i--;
		if (str[i] == lettre)
			return 0;
	}
	return 1;
}
int main(int argc, char**argv)
{	
	int i = 0;
	
	if (argc == 3)
	{		
		while(argv[1][i])
		{
			if(test(argv[1], argv[1][i], i))
					write(1, &(argv[1][i]), 1);
			i++;
		}
		i = 0;
		while(argv[2][i])
		{
			if(test(argv[1], argv[2][i],ft_strlen(argv[1])))
			{
				if (test(argv[2], argv[2][i], i))
					write(1, &(argv[2][i]), 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
