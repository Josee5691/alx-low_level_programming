#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 * @c: the character to be checked
 * Return: if uppercase returns 1 else returns 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
