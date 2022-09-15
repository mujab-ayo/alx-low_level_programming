#include "main.h"
/**
 * print_sign - check sign
 * @n: The character to print
 *
 * Description: check number sign
 * Return: 1 if n>0 , -1 if n<0, 0 if n=0
 */
int print_sign(int n)
{
	if (n > 0)
		_putchar(1);
	else if (n < 0)
		_putchar(-1);
	else
		_putchar(0);
	return (0);
}
