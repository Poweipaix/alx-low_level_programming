#include "main.h"
/**
 * _puts - prints a string
 * @str: string to print
 *
 * Descriptiom; prints a string
 * On succes: returns the number of character printed
 */
void _puts(char *str)
{
while (*str)
putchar(*str++);

putchar('\n');
}
