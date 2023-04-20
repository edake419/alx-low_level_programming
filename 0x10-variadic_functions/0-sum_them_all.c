#include "variadic_functions.h"

/**
* sum_them_all - returns the sum of all its parameters
*
* Return: sum of its parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start (ap, n);
	
	sum=o;
	for (i=0; i < n, i++)
		sum+=va_arg (ap, int_);

	va_end (ap);
	return sum;
}
		
