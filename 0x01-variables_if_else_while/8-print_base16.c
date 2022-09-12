#include <stdio.h>
#include <unistd.h>
/**
 * main - print hexadecimal
 *
 * Description: print all numbers of hexadecimal
 * Return: 0
 */
int main(void)
{
	char ch, num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
