#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
 * a function that allocates memory using malloc
 * @b: integer variable dat holds the memory size
 * Return: 0 program was successful
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	
	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	
	return (ptr);
}
