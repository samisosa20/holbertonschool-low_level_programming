#include <stdio.h>

/**
* main - prints fibonacci
*
* Return: 0
*/
int main(void)
{
	long i, a, b, res;

	res = 0;
	a = 1;
	b = 2;
	for (i = 0; i < 50; i++)
	{
		res = a + b;
		a = b;
		b = res;
		if (i != 49)
			printf("%ld, ", res);
		else
			printf("%ld\n", res);
	}
	return (0);
}
