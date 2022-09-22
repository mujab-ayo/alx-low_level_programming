#include "main.h"
/**
 * *_strncat - concatenate two string
 *
 * @dest: string of char type
 * @src: string of char type
 * @n: refer to an integer
 * Description: append n number of char
 * from src to dest
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len++;

	for (j = 0; j < n; j++)
	{
		dest[len + j] = src[j];
	}
	return (dest);
}
