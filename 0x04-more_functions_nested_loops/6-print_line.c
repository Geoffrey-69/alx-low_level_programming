#include "main.h"

/**
 * print_line - straight line
 *
 * @n: id the number of times the characters
 * should be printed
 */
void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; lnChr++)
			_putchar('_');
	}
}
