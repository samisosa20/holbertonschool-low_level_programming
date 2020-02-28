#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that multiplies two numbers.
* @argc: count of the arguments supplied to the program and the
* @argv: an array of pointers to the strings
* Return: always 0.
*/
int main(int argc, char *argv[])
{
	int count, multi = 1;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
			multi = multi * atoi(argv[count]);
		printf("%d\n", multi);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
