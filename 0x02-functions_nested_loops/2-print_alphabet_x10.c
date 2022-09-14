#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *
 * Description: print alphabet in 10 rows
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		j = 'a';

		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}

		_putchar('\n');
	}
}
