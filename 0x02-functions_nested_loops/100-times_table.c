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

		for (column = 1; column <= n; column++)
		{
			_putchar(',');
			_putchar(' ');
			product = row * column;

			if (product <= 99)
				_putchar(' ');

			if (product <= 9)
				_putchar(' ');

			if (product >= 100)
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
			}
			else if (product <= 99 && product >= 10)
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');

			if (column < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
