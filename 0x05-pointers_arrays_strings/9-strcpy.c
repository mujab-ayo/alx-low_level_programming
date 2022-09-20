#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copy string
 *
 * @dest: string of char
 * @src: string of char
 * Description: copy the string pointed to by src to dest buffer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
