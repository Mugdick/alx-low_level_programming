#iclude "main.h"

/**
 * factorial - Returns the factorial of a given number n
 * @n: The number whose factorial is to be returned
 *
 * Description: the function will take in any number and return its factorial
 * Return: if n < 0 - return  -1 implying error
 *         if n == 0 return 1  - factorial of 0 is 1
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
	int facto *= (n * factorial(n - 1));
	return (facto);

}
