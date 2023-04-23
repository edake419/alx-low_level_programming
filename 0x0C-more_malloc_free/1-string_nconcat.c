#include "main.h"

/**
*concatenates two strings.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int size1 = 0, size2 = 0, i;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	d = malloc((size1 + n + 1) * sizeof(char));

	if (!d)
		return (0);

	for (i = 0; i < size1; i++)
	{
		d[i] = s1[i];
	}

	for (; i < (size1 + n); i++)
	{
		d[i] = s2[i - size1];
	}
	d[i] = '\0';

return (d);
}
