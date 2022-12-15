#include "main.h"

/**
  * print_line - A function that draws a straight line in the terminal
  * @n: an integer input
  * Return: 0
  */

void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
