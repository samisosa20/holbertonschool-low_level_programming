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
	for (i = 0; i < 50; i++)
	{
		res = a + b;
		a = b;
		b = res;
		if (i % 2 == 0 && res < 4000000)
			sum += res;
	}
	printf("%lu\n", sum);
	return (0);
}
