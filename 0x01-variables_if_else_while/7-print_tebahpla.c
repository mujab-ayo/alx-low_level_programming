#include <stdio.h>
/**
 * main - print alphabet
 *
 * Description: print alphabet a - z in reverse
 * Result: 0 (success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
