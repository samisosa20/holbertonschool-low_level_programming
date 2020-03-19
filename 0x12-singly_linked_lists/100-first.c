#include <stdio.h>
#include <stdlib.h>
void startupfun(void) __attribute__ ((constructor));
/**
 * startupfun - function strat before main()
 *
 * Return: None.
 */
void startupfun(void)
{
	printf("You're beat! and yet, you must allow,\n"
	"I bore my house upon my back!\n");
}
