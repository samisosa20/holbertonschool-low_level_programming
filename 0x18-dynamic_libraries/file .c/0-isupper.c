/**
* _isupper - evaluate if the letter is upper or not.
* @c: input letter.
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
