#include "main.h"
/**
 * *_memset - fill memory with constant byte
 *
 * @s: pointer to the memory to be filled
 * @b: constant to fill memory with
 * @n: number of time to fill the memory
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
