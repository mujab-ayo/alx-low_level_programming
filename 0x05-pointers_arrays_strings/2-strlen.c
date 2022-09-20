#include "main.h"
/**
 * _strlen - length of a string
 *
 * @s: is a character
 * Description: print length of character in a string
 * Return: length
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
