#include "holberton.h"

/**
 * times_table -  prints the 9 times table, starting with 0.
 * Return: void
 */
void times_table(void)
{
int a;
int b;
int c;
int d;
int e;
int f;
int g;
for (a = 0 ; a <= 9 ; a++)
{
_putchar('0');
_putchar(',');
_putchar(' ');
for (b = 1 ; b <= 10 ; b++)
{
c = b * a;
d = c % 10;
e = (c - d) / 10;
if (c <= 10)
_putchar(e + '0');
else
_putchar(' ');
_putchar(d + '0');
_putchar(',');
_putchar(' ');
}
c = 9 * a;
f = c % 10;
g = (c - f) / 10;
if (c <= 10)
_putchar(g + '0');
else
_putchar(' ');
_putchar(f + '0');
_putchar('\n');
}
}
