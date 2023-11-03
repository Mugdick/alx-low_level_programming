include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: if malloc fails - normal process termination with 98
 */


void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
