#include "holberton.h"

/**
* _strcat - appends the src string to the dest string.
* @dest: pointer to appens src.
* @src: appends to dest.
* Return: pointer.
*/
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	while (*dest != '\0')
	{
		dest_len++;
		dest++;
	}
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
