include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements.
 * @size: Byte size of each array element.
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - return a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memo = malloc(size * nmemb);

	if (memo == NULL)
		return (NULL);

	filler = memo;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (memo);
}
