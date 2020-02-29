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
	int count, change = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		change = atoi(argv[1]);
		for (count = 0; change > 0; count++)
		{
			if (change - 25 >= 0)
				change = change - 25;
			else if (change - 10 >= 0)
				change = change - 10;
			else if (change - 5 >= 0)
				change = change - 5;
			else if (change - 2 >= 0)
				change = change - 2;
			else if (change - 1 >= 0)
				change = change - 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
