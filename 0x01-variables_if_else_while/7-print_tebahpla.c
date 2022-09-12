#include <stdio.h>
/**
 * main - print alphabet
 *
 * Description: print alphabet a - z in reverse
 * Result: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
