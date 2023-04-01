#include <stdio.h>
/**
 * main - prints various sizes of types
 *
 * This program prints the sizes of various types on the
 *                      computer it is compiled and run on.
 *
 * Return: 0 on success
 */

int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %lu byte(s)\n", sizeof(c));
printf("Size of an int: %lu byte(s)\n", sizeof(i));
printf("Size of a long int: %lu byte(s)\n", sizeof(li));
printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
