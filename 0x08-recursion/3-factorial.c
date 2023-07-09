#iclude "main.h"

/**
 * factorial - Returns the factorial of a given number n
 * @n: The number whose factorial is to be returned
 *
 * Description: the function will take in any number and return its factorial
 * Return: if n == 0 - return 1 implying error
 *         else - return the factorial of n
 *
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
