#include "main.h"

/**
*prints a string followed by a new line
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}

	_putchar (*s);
	_puts_recursion(s + 1);
}