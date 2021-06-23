#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase x10
 * Return: void
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0 ; i < 10 ; i++)
{
int l = 97;
while (l <= 122)
{
_putchar(l);
l++;
}
_putchar('\n');
}
}
