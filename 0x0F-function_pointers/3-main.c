#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 * @argc: number argument.
 * @argv: string of argument.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
