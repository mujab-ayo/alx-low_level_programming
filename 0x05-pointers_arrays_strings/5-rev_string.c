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
	int len = 0;
	char c;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (j = 0; j <= len / 2; j++)
	{
		c = s[j];
		s[j] = s[len - j - 1];
		s[len - j - 1] = c;
	}
}
