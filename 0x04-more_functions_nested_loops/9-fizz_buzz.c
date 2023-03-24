#include "main.h"

/**
 * main - numbers 1 - 100 followed by a new line
 * multiples of 3 print fizz
 * multiples of 4 print buzz
 * multiples of 3 and 5 print fizz buzz
 * each number and word to be separated by space
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("fizz");
		else if (num % 5 == 0 && num % 5 == 0)
			printf("buzz");
		else if (num % 3 == 0 && num % 5 == 0)
			printf("fizzbuzz");
		else
			printf("%d", num);

		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
