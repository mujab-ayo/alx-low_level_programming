#include "main.h"
/**
 * *_memset - fill memory with a constant byte
 *
 * @s: pointer to memory address to be filled
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
