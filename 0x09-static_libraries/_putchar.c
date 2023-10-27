#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character  to standard out put
 * @c: The character to print
 *
 * Return: if success 1.
 * if error -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
