#include "main.h"

/**
 * swap_int - swap the values of two integers a and b
 * @a: pointer to an int that will be updated
 * @b: pointer to an int that will be updated
 * Return: void that means our answer is correct
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
