#include <stdio.h>

/**
* main - prints fibonacci
*
* Return: 0
*/
int main(void)
{
	int i, a, b, res;

	res = 0;
	a = 1;
	b = 2;
	for (i = 1; i <= 50; i++)
	{
		res = a + b;
		a = b;
		b = res;
		if ( i != 50)
			printf("%d, ", res);
		else
			printf("%d\n", res);
	}
	return (0);
}
