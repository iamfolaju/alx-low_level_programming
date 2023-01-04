#include "main.h"

/**
 * _strlen_recursion - size
 * @c: pointer to string params
 * Return: recursion
 */

int _strlen_recursion(char *c)
{
	if (!*c)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++c));
}
