#include "main.h"
/**
 * _puts_recursion - a function used to print a string and a new line
 * @s: a pointer of type char
 *
 * Return: returns a void
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_putchar(s + 1);
}
else

	_putchar('\n');
}
