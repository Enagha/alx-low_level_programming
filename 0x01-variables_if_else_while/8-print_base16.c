#include <stdio.h>

/**
 * main - prints all the numbers of base in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	int num;

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	for (num = 0; num < 10; num++)
		putchar((num));
	putchar('\n');
	return (0);
}
