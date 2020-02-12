#include <stdio.h>
/**
 * main - sum fibonacci numbers under 4M.
 * Return: Nothing.
 */
int main(void)
{
	unsigned long x, a, b, res, sum;

	a = sum = 0;
	b = 1;
	for (x = 0; x < 50; x++)
	{
		res = a + b;
		a = b;
		b = res;
		if (res % 2 == 0 && res < 4000000)
		{
			sum += res;
		}
	}
	printf("%lu\n", sum);
	return (0);
}
