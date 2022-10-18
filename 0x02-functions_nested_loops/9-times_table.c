#include "main.h"

/**
 * times_table -prints tables
 * Return: Always 0.
 **/
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_purchar(',');
			_purchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_purchar(' ');
			else
				_purchar((prod / 10) + '0');
			_purchar((prod % 10) + '0');
		}
		_purchar('\n');
	}
}
