#include <stdio.h>
/**
 * main - print alphabet
 *
 * Description: print all alphabet except 'e' and 'q'
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch < 'z'; ch++)
		if (ch != 'e' || ch != 'q')
			putchar(ch);
	putchar('\n');
	return (0);
}
