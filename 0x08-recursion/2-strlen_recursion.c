#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s:represents the string to be measured
 * Description: Measures the length of string and returns lenth length
 * Return: thelength of the string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
