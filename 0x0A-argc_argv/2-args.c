#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int d;

	for (d = 0; d < argc; d++)
	printf("%s\n", argv[d]);

	return (0);
}
