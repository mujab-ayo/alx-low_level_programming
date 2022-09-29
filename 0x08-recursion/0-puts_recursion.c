#include "main.h"
/**
 * _puts_recursion - put a string followed by a new line
 *
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
	else
		_putchar('\n');
}
