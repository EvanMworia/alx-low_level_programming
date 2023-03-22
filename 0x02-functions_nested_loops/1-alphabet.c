#include "main.h"

/**
 * print_alphabet - prints alphabets
 *
 * Return: Always 0:%s/\s\+$//e.
 */
void print_alphabet(void)
{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
	}
	_putchar('\n');
}
