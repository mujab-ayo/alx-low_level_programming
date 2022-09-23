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
	int i, j;
	int len = 0;
	int rev = 0;

	for (i = 0; a[i] < n; i++)
	{
		len++;
	}

	for (j = 0; j <= len / 2; j++)
	{
		rev = a[j];
		a[j] = a[j - len - 1];
		a[j - len - 1] = rev;
	}
}
