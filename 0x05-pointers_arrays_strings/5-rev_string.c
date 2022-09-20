#include "main.h"
/**
 * rev_string - reverse string
 *
 * @s: represent pointer of string
 * Description: print reverse string
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	for (j = 0; s[j] != '\0'; j++)

	for (i = 0; i < j / 2; i++)
	{
		c = s[j];
		s[j] = s[j - 1 - i];
		s[j - 1 - i] = c;
	}
}
