#include "main.h"

/**
 *main - print_alphabet_x10 - function to print abc 10 times
 *
 * Return: Always 0
 */
int main(void)
void print_alphabet_x10(void)
{
        char c, i;

        for (i = 0; i <= 9; i++)
        {
                for (c = 'a'; c <= 'z'; c++)
                {
                        putchar(c);
                }
                putchar('\n');
        }
}

int main(void)
{
    print_alphabet_x10();
    return 0;
}
