#include "main.h"

/**
 * print_sign - check input if its positive, negative or zero
 * @n: variable to determine if input is greater than, less than or is zero
 * Return: 0 if succesful
 */

int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_put_char('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}
	return (i);
}
