#include "main.h"
/**
 * _memset - Fills the first n bytes of memory
 * @s: Pointer destination
 * @b: constant byte
 * @n: bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
