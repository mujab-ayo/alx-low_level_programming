#include <stdio.h>
#include <unistd.io>
/**
 * main - alphabet
 *
 * Description: print alphabets
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch < 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
