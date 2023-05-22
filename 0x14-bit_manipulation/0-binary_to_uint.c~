#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of '0' and '1' characters
 *
 * Return: The converted number, or 0 if there is one or more chars
 *         in the string b that is not '0' or '1', or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int base = 1; /* Represents the current power of 2 */
	size_t length = 0;
	int i;

	if (b == NULL)
		return (0);

	length = strlen(b);

	for (i = (int)(length - 1); i >= 0; i--)
	{
		if (b[i] == '0')
		{
			/* If the current character is '0', no need to update result */
		}
		else if (b[i] == '1')
		{
			dec_value += base; /* Add the current power of 2 to the result */
		}
		else
		{
			return (0); /* Return 0 if the character is not '0' or '1' */
		}

		base *= 2; /* Multiply base by 2 to move to the next power of 2 */
	}

	return (dec_value);
}
