#include "main.h"
/**
 * print_times_table - print times table of n
 *
 * @n: the times table to be printed
 * Return: void
 */
void print_times_table(int n)
{
	int column, row, product;

	for (row = 0; row <= n; row++)
	{
		if (n < 0 || n > 15)
			break;

		_putchar(0 + '0');
		_putchar(',');
		_putchar(' ');

		for (column = 1; column <= n; column++)
		{
			product = row * column;

			if ((product / 10) > 0)
				_putchar((product / 10) + '0');
			else
				_putchar(' ');

			_putchar((product % 10) + '0');

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
