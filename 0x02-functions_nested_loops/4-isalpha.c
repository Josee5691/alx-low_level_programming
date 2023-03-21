#include "main.h"

/**
 * _isalpha - checks if input is lowercase
 * @c: variable to determine if input is lowercase
 * main - uses built in function
 * Return: 0 if succesful
 */

int _isalpha(int c)
{
	int n = 0;

	if (n >= 'a' && n <= 'z')
		n = 1;
	else if (n >= 'A' && n <= 'Z')
		n = 1;
	return (n);
}
