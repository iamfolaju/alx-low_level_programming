#include "main.h"
#include <stdio.h>

/**
 * main - Entry piont
 *
 * Return: Always 0
 */

int main(void)
{
	int a = 1;

	for (; a < 100 ; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	printf("Buzz\n");

	return (0);
}
