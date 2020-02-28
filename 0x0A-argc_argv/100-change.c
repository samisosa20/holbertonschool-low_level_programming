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
	int count, multi = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			if (isdigit(*argv[count]))
			{
				if (atoi(argv[count]) % )
				{
					multi = multi + atoi(argv[count]);
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}
		printf("%d\n", multi);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
