#include <stdio.h>

/**
* main - prints fibonacci
*
* Return: 0
*/
int main(void)
{
	unsigned long i, a, b, res, sum;

	res = sum = 0;
	a = 0;
	b = 1;
	while (a < 4000000 && b < 4000000)
	{
		if ((b % 2) == 0)
			sum += b;
		res = a + b;
		a = b;
		b = res;
	}
	printf("%lu\n", sum);
	return (0);
}
