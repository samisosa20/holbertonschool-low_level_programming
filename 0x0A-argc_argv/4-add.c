#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - a program that adds positive numbers.
* @argc: count of the arguments supplied to the program and the
* @argv: an array of pointers to the strings
* Return: always 0.
*/
int main(int argc, char *argv[])
{
	int count, multi = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			if (isdigit(*argv[count]))
			{
				multi += atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}
		printf("%d\n", multi);
	}
	return (0);
}
