#include "main.h"
/**
 * *cap_string - string capitalization
 *
 * @s: string to be capitalize
 * Description: capitalize first letter of every word
 * Return: s
 */
char *cap_string(char *s)
{
	int a, i;
	int cstr = 13;
	char cs[] = {',', ';', '.', 33, '?', '"', '(', ')', '{', '}', '\n', '\t', 32};

	a = 0;
	while (s[a])
	{
		i = 0;
		while (i < cstr)
		{
			if (((s[a] == 0) || (s[a - 1] == cs[i])) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return (s);
}
