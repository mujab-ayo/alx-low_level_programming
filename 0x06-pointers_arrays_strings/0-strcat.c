#include "man.h"
/**
 * *_strcat - concatenate two strings
 *
 * @dest: string of char type
 * @src: string of char type
 * Description: append src string to dest buffer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, m;
	int len1, len2;

	len1 = 0;
	len2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
		len1++;

	for (j = 0; src[j] != '\0'; j++)
		len2++;

	for (m = 0; m <= len2; m++)
	{
		dest[len1 + m] = src[m];
	}

	return (dest);
