/**
* _strchr - a function that locates a character in a string
* @s: pointer that locate a character.
* @c: character.
* Return: pointer.
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
