#include "main.h"
/**
 * swp_int - swap two integers;
 * @a: first integer
 * @b: second integer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
