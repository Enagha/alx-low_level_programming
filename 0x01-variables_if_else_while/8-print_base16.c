#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	int num;

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	for (num = '0'; num < '10'; num++)
		putchar((num % 10) + '0');
		
	
	putchar('\n');

	return (0);
}
