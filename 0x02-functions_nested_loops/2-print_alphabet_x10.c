#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet
 * main - uses built in function
 * Return: 0 if succesful
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar('c');
		_putchar('\n');
		i++;
	}
}
