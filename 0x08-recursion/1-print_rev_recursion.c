#include "main.h"

/**
 * _print_rev_recursion - reverse
 * @c: pointer to string params
 */

void _print_rev_recursion(char *c)
{
	if (*c)
	{
		_print_rev_recursion(c + 1);
		_putchar(*c);
	}
}
