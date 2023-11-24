#include "main.h"


/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b:pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number or zero if
 *         - there is one or more chars in the string b
 *           that is not 0 or 1
 *         - b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int length = 0;

	if (b[length] == '\0')
		return (0);

	while ((b[length] == '0') || (b[length] == '1'))
	{
		num <<= 1;
		num += b[length] - '0';
		length++;
	}

	return (num);
}
