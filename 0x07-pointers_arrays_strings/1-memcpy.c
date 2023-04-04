#include "main.h"
/**
 * _memcpy - function used to copy memory area
 * @dest: where memory is copied to
 * @src: memory origin
 * @n: number of bytes
 *
 * Return: returns copied mem with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{

	dest[r] = src[r];
	n--;

	}
	return (dest);
}
