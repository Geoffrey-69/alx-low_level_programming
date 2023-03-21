#include "main.h"
/**
 * print_alphabet - function to print abc
 *
 * Return:0
 */
void print_alphabet(void)
{
    char c = 'a';
    do {
        _putchar(c);
        c++;
    } while(c <= 'z');
    _putchar('\n');
}
