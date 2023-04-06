#include "main.h"
/**
 * _puts_recursion - a function used to print a string and a new line
 * @s: a pointer of type char
 *
 * Return: returns a void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{

		_putchar('\n');
	}
	_putchar(*s);
	_puts_recursion(s + 1);


}
