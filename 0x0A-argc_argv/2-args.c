#include <stdio.h>

/**
* main - a program that prints all arguments it receives.
* @argc: count of the arguments supplied to the program and the
* @argv: an array of pointers to the strings
* Return: always 0.
*/
int main(int argc, char *argv[])
{
	int count;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}

	return (0);
}
