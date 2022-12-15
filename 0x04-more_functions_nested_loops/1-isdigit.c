#include "main.h"

/**
  * _isdigit - check if parameter is a number between 0 to 9
  * @x: input number
  * Return: 1 if true or 0 if false
  */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
