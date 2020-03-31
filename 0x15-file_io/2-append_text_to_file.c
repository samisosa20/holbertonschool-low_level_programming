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
 * append_text_to_file - function that appends text at
 * the end of a file
 * @filename: filename.
 * @text_content: content of file.
 * Return: 1 is success or -1 is wrong.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int of = 0, cf = 0, wf = 0, leng = 0;

	if (filename == NULL)
		return (-1);
	of = open(filename, O_APPEND | O_RDWR);
	if (of == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	leng = _strlen(text_content);
	wf = write(of, text_content, leng);
	if (wf == -1)
		return (-1);
	cf = close(of);
	if (cf == -1)
		return (-1);
	return (1);
}
