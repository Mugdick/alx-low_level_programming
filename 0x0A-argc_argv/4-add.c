#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-digit is among the passed in arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int d, j, length, sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (d = 1; d < argc; d++)
		{
			ptr = argv[d];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[d]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
