#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Program that takes first two numbers and prints the product
*         followed bt a new line
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not two arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int d, j;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		j = 1;

		for (d = 1; d < 3; d++)
		j *= atoi(argv[d]);

		printf("%d\n", j);
	}

	return (0);
}
