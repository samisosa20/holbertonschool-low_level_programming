/**
* _strstr -function that locates a substring..
* @haystack: pointer that contect string.
* @needle: pointer that content character
* to search into other pointer.
* Return: pointer.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
		return (haystack);

	for (; *haystack; haystack++)
	{
		if (*haystack == *needle)
		{
			for (i = 0; *(needle + i); i++)
			{
				if (*(needle + i) != *(haystack + i))
					break;
				if (*(needle + 1 + i) == 0)
					return (haystack);
			}
		}
	}
	return ('\0');
}
