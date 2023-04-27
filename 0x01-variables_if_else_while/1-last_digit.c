#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Assigns random number to the variable
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int x;

	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, x);
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0", n, x);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0");
	}
	printf("\n");
	return (0);
}