#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly-allocated
 * space in memorycontaining a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or insufficient memory was available - NULL.
 *         Otherwise - returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		dup[index] = str[index];

	dup[len] = '\0';

	return (dup);
}
