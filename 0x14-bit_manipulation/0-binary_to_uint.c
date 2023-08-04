#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of '0' and '1' characters
 *
 * Return: The converted number, or 0 if there is one or more chars
 *         in the string b that is not '0' or '1', or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_value = 0;
	unsigned int base = 1; /* Represents the current power of 2 */
	size_t length = 0;
	int i=0;

	if (b == NULL)
		return (0);

	length = strlen(b);


    while (b[i] != '\0') {
        // Check for non-binary characters
        if (b[i] != '0' && b[i] != '1') {
            return 0;
        }
        i++;
    }

	for (i = (int)(length - 1); i >= 0; i--)
	{

		if (b[i] == '1')
		{
			dec_value += base; /* Add the current power of 2 to the result */
		}

		base *= 2; /* Multiply base by 2 to move to the next power of 2 */
	}

	return (dec_value);
}
