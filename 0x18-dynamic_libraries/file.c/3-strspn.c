/**
* _strspn - a function that gets the length of a prefix substring
* @s: pointer that locate a character.
* @accept: character.
* Return: pointer.
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, t = 0;

	while (s[i] != '\0')
	{
		t = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				t = 1;
		}
		if (t == 0)
			break;
		i++;
	}
	return (i);
}
