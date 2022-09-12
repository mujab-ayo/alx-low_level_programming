#include <stdio.h>
#include <unistd.h>
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
