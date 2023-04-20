#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;
	
	va_start(ap, n);

	sum=0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(valist);
	return (sum);
}