#include "main.h"

/**
 * main - print alphabets
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int ch = 'A';

	while(ch <= 'Z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
