#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print n - 98
 *
 * @n: an integer
 * Description: print natural number from n t0 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d", n);
			n++;
		}
	}
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d", n);
			n--;
		}
	}
}
