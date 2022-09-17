#include "main.h"
/**
 * print_line - print line
 *
 * @n: is an integer
 * Description: draw a straight line with _ Return: 0
 */
void print_line(int n)
{
	int i;

	i = 0;
	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
