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
	long number, d;

	number = 612852475143;
	for (d = 2; d < sqrt(number); d++)
	{
		if (number % d == 0)
		{
			/*printf("%ld / %ld - ", number, d);*/
			number = number / d;
			d = 1;
		}
	}
	printf("%ld\n", number);
	return (0);
}
