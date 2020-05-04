/**
* _strcat - appends the src string to the dest string.
* @dest: pointer to appens src.
* @src: appends to dest.
* Return: pointer.
*/
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0 ; src[i] != '\0' ; i++)
		dest[j + i] = src[i];

	return (dest);
}
