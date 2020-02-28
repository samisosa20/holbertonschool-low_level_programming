#include <stdio.h>

/**
* main - program that prints the number of arguments passed into it.
* @argc: count of the arguments supplied to the program and the
* @argv: an array of pointers to the strings
* Return: always 0.
*/
int main(int argc, char __attribute__((unused))  *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
