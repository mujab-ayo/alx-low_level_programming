#include "main.h"
/**
 * *_memcpy - copy memory
 *
 * Description: copy from dest to src
 * @dest: destination memory
 * @src: source memory
 * @n: number limit
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
