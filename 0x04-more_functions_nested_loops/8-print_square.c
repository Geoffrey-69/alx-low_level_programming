#include "main.h"

/**
 * print _square - print a square using the character #
 *
 * @size: is the size of square
 *
 * Retuurn: Always 0 (success)
 */

void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
	_putchar('\n');
	}
}
