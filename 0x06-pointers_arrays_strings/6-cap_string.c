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
	int i;

	for (i = 0; s[i] >= 97 && s[i] <= 122; i++)
	{
		if (s[i] == 0 ||
		    s[i - 1] == ' ' ||
		    s[i - 1] == ',' ||
		    s[i - 1] == ';' ||
		    s[i - 1] == '.' ||
		    s[i - 1] == '!' ||
		    s[i - 1] == '?' ||
		    s[i - 1] == '"' ||
		    s[i - 1] == '(' ||
		    s[i - 1] == ')' ||
		    s[i - 1] == '{' ||
		    s[i - 1] == '}')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
