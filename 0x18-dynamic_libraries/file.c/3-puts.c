/**
* _puts - a function that prints a string, followed by a new line, to stdout.
* @str: first integer.
*
* Return: null.
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
