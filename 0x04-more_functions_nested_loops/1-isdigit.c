#include "main.h"

/**
 * _isdigit - checks if a number is a digit
 * @c: the number to be checked
 * Return: returns 1 if number is a digit 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	return (0);
}
