#include "main.h"
/**
 * reverse_array - reverse array
 *
 * @a: array to be reversed
 * @n: total number of element in an array
 * Description: reverse an array of n element
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int rev;

	for (i = 0; a[i] < n; i++)
	{
		rev = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = rev;
	}
}
