#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Unsigned long integer
 * @index: Index of the bit to get, starting from 0
 *
 * Return: The value of the bit at the given index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if (n & (1UL << index))
		return (1);
	else
		return (0);
}
