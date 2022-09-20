#include "main.h"
/**
 * swap_int - swap number
 *
 * @a: is an integer
 * @b: is an integer
 * Description: swap the value of two numbers
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
