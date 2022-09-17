#include "main.h"
/**
 * print_numbers - print numbers
 *
 * Description: print numbers from 0 - 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
}
