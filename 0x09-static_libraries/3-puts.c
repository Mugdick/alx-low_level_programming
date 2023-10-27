#include "main.h"

/**
 * _puts - prints both a string and a new line
 * @str: pointer to a string to be printed
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
