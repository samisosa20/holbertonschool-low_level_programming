#include <stdio.h>

/**
* main - prints fibonacci
*
* Return: 0
*/
int main(void)
{
	unsigned long i, a, b, res;

	res = 0;
	a = 1;
	b = 2;
	for (i = 0; i < 50; i++)
	{
		res = a + b;
		a = b;
		b = res;
		if (i != 49)
			printf("%lu, ", res);
		else
			printf("%lu\n", res);
	}
	return (0);
}
