#include "holberton.h"
/**
* _strlen - a function that returns the length of a string.
* @s: first integer.
*
* Return: return length of a string.
*/
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}

/**
 * create_file - function that creates a file.
 * @filename: filename.
 * @text_content: content of file.
 * Return: 1 is success or -1 is wrong.
 */
int create_file(const char *filename, char *text_content)
{
	int of = 0, cf = 0, wf = 0, leng = 0;

	if (filename == NULL)
		return (-1);
	of = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (of == -1)
		return (0);
	if (text_content != NULL)
	{
		leng = _strlen(text_content);
		wf = write(of, text_content, leng);
	}
	if (wf == -1)
		return (0);
	cf = close(of);
	if (cf == -1)
		return (0);
	return (1);
}
