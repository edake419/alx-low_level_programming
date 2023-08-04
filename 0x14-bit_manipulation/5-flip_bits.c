#include "main.h"

/**
 * flip_bits - Counts the number of bits to flip to get from n to m
 * @n: Unsigned long integer
 * @m: Unsigned long integer
 *
 * Return: The number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m, count = 0;

	while (xor_result != 0)
	{
		count += xor & 1;
		xor_result >>= 1;
	}

	return (count);
}
