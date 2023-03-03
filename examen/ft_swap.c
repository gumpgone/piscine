void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
#include <stdio.h>

int main()
{
	int x = 6;
	int y = 3;
	ft_swap(&x , &y);
	printf("%d\n%d\n", x, y);
}	
