#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int d;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (d = 0; *argv; d++, argv++)
			;

		printf("%d\n", d - 1);
	}

	return (0);
}
