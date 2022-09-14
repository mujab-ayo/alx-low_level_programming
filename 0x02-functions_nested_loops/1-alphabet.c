#include "main.h"

/**
 *print_alphabet - print character to the stout
 *
 * Description: print alphabet in lower case
 * followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
