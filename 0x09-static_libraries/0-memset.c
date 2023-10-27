#include "main.h"

/**
 * _memset - Fills the first bytes of the memory area
 *	pointed to by a pointer @s with the constant byte
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
		s[d] = b;

	return (s);
}
