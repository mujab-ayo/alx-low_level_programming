#include "main.h"
/**
 * *_strncpy - copy string
 *
 * @dest: string of char type
 * @src: string of char type
 * @n: is an integer
 * Description: copy string of n char from src to dest buffer
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
