#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print if numberis positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "programming is positive, zere or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* YOUR CODE GOES HERE */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n==0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	Return (0);
}