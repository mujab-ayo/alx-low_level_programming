#include "main.h"
/**
 * more_numbers - print number
 *
 * Description: print number 0 - 9 in fourteen columns
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i <= 14)
	{
		for (j = 0; j <= 9; i++)
			_putchar(j + '0');
		_putchar('\n');
		i++;
	}
	_putchar('\n')
}
