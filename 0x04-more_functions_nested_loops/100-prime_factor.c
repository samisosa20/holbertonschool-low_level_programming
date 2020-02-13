#include <stdio.h>
#include <math.h>
/**
* main -  finds and prints the largest
* prime factor of the number 612852475143.
*
* Return: always return 0.
*/

int main(void)
{
	long number, d, aux;

	number = aux = 612852475143;
	for (d = 2; d < sqrt(number); d++)
	{
		if (aux % d == 0)
		{
			number = number / d;
			d = 1;
		}
	}
	printf("%ld\n", number);
	return (0);
}
