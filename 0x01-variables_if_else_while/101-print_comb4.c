#include <stdio.h>

/**
  * main - print all possible different combinations of three digits
  * Return: 0
  */

int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b 49; b < 58; b++)
		{
			for (c = 50; c < 58; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != 55 || m != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
