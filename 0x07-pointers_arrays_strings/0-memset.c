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
	unsigned int i;

	for (i = 0; i < n && s[i] != '0'; i++)
	{
		s[i] = b;
	}
	return (s);
}
