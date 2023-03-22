#include "main.h"

/**
 * test_isalpha - check if c is a letter, lowercase or uppercase
 * @c: character to check
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int test_isalpha(char c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

int main(void)
{
char c = 'a';
int result;

result = test_isalpha(c);

printf("Is %c a letter? %d\n", c, result);

return (0);
}
