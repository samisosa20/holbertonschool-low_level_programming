#include <stdio.h>
/**
* main -  finds and prints the largest
* prime factor of the number 612852475143.
*
* Return: always return 0.
*/

int main(void)
{
	long number, d, last_number, aux;

	number = aux = 612852475143;
	for (d = 2; d < number; d++)
	{
		if (aux % d == 0)
		{
			last_number = d;
			number = number / d;
			d = 2;
			/*printf("%ld - %ld, ", number, d);*/
		}
	}
	printf("%ld\n", last_number);
	return (0);
}
