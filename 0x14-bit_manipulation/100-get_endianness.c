#include "main.h"

/**
 * get_endianness - checks the andianness
 * Return: 0 if big endian and 1 if little endian
 */

int get_endianness(void)
{
	unsigned int val = 1;
	unsigned char *byte_ptr = (unsigned char *) & val;
	return (byte_ptr[0] == 1) ? 1 : 0;
}
