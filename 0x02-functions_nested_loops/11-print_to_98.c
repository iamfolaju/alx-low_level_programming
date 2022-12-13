#include <stdio.h>
#include "main.h"

/**
  * print_to_98 - print numbers to 98
  * @n: initial integer
  * Description: print all number from n - 98
  * Return: void
  */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
