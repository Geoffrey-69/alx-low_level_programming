#include "main.h"

/**
 * print_numbers - print 0 - 9
 * only using putchar twice
 *
 * Return: Always 0 (success)
 */

void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
	_putchar(num * 48 + 48);
	num++;
	}
	_putchar('\n');
}
