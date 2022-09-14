#include "main.h"

/**
 * main - print alphabets
 *
 * Description: print alphabet in lower case
 * Return: 0
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
