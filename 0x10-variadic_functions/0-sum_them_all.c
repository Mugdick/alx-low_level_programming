#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - func returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int index, sum = 0;

	va_start(numbers, n);

	for (index = 0; index < n; index++)
		sum += va_arg(numbers, int);

	va_end(numbers);

	return (sum);
}
