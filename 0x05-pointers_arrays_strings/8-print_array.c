#include "main.h"
#include <stdio.h>
/**
 * print_array - print array
 *
 * @a: array pointer of int type
 * @n: is an integer
 * Description: print n element of an array of integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n-1))
			printf(", ");
	}
	printf("\n");
}
