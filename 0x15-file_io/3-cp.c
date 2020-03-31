#include "holberton.h"

/**
 * main - copies a file
 *
 * @argc: argument cont
 * @argv: arguments
 * Return: Returns 97 for syntax error, 98 for read error, 99 write, 100 close
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rf, wf, cf;
	char buf[BUFSIZE];

	wf = cf = 1;
	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
			exit(97);
	if (argv[1] == NULL)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	if (argv[2] == NULL)
		dprintf(STDERR_FILENO, "Erro\r: Can't write to file %s\n", argv[2]),
			exit(99);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
			   S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	rf = read(file_from, buf, BUFSIZE);
	if (rf == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
			exit(98);
	while (rf != 0)
	{
		wf = write(file_to, buf, rf);
		if (wf == -1 || wf != rf)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		rf = read(file_from, buf, BUFSIZE);
		if (rf == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
				exit(98);
	}
	cf = close(file_from);
	if (cf == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	cf = close(file_to);
	if (cf == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
