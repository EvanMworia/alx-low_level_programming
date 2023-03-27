#include "main.h"
/**
 * swap_int - swaps the values of two variables
 * @a: value of first integer
 * @b: value of second integer
 * Return - void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
