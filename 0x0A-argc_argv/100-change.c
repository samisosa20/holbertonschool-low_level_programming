#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - program that prints the minimum number of coins
* to make change for an amount of money.
* @argc: count of the arguments supplied to the program and the
* @argv: an array of pointers to the strings
* Return: always 0.
*/
int main(int argc, char *argv[])
{
	int count, multi = 0, num = 0;
	int a[5] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		for (count = 0; count < 5; count++)
		{
			if (num / a[count] != 0)
			{
				multi += num / a[count];
				num = num % a[count];
			}
		}
	}
	printf("%d\n", multi);
	return (0);
}
