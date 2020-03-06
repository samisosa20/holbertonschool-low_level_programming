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

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		for (count = 1; count < argc; count++)
		{
			if (atoi(argv[count]) >= 100 || atoi(argv[count]) < 10)
			{
				printf("Error\n");
				exit(98);
			}
			multi = multi * atoi(argv[count]);
		}
		printf("%d\n", multi);
		return (0);
	}
}
