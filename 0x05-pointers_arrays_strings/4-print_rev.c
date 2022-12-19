#include "main.h"

/**
  * print_rev - Print string backwards
  * @s: String
  * Return: void
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
