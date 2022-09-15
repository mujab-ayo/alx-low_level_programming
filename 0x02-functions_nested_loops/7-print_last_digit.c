#include "main.h"
/**
 * print_last_digit - last digit
 *
 * @n: n is an integer
 * Description: print last digit of an integer
 * Return: int
 */
int print_last_digit(int n)
{
	int j = n % 10;

	if (n < 0)
		j = j * -1;
	_putchar(j);
	return (j);
}
