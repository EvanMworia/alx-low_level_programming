#include "main.h"
/**
 * _memset - fills memeory with a constant byte
 * @s: a pointer that derefrences n
 * @n: number of bytes to be filled after iteration
 * @b: the constant byte to fill the memory
 *
 * Return: a pointer to the filled memory.
 */
char *_memset(char *s, char b, unsigned int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b
	}
	return (s);
}
