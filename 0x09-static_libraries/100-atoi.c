#include "main.h"

/*
* _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *Return: The integer value of the comverted string.
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int number = 0;

	do {

		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			number = (number * 10) + (*s - '0');

		else if (number > 0)
			break;
	} while (*s++);

	return (number * sign);
}
