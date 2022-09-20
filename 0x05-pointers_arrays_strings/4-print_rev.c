#include "main.h"
/**
 * print_rev - reverse
 *
 * @s: is a string pointer
 * Description: print string in reverse
 * Return: void
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	while (n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
