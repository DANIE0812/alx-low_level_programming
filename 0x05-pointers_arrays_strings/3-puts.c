#include "main.h"

/**
 * _puts - prints a string
 * @str: A pointer to an int that will be changed
 * Return: void which means our answer is correct
 */

void _puts(char *str)
{
	char *c;
	int d;

	c = str;

	for (d = 0; c[d]; d++)
	{
		_putchar (c[d]);
	}
	_putchar('\n');
}
