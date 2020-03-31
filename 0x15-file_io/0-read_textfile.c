#include "holberton.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: filename.
 * @letters: nro of characters to print
 * Return: nro characters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int of = 0, cf = 0, rf = 0, wf = 0;
	char *buf;

	if (filename == NULL)
		return (0);
	of = open(filename, O_RDWR);
	if (of == -1)
		return (0);
	buf = malloc(letters + 1);
	if (buf == NULL)
		return (0);
	rf = read(of, buf, letters);
	if (rf == -1)
		return (0);
	wf = write(STDOUT_FILENO, buf, letters);
		if (wf == -1)
			return (0);
	cf = close(of);
		if (cf == -1)
			return (0);
	return (letters);
	free(buf);
}
