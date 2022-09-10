#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
