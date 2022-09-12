#include <stdio.h>
/**
 * main - alphabet
 *
 * Description: print alphabets
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
