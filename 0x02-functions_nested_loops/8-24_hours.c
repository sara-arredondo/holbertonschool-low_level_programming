#include "holberton.h"

/**
 * jack_bauer - print all minutes of the day
 * Return: int
 */
void jack_bauer(void)
{
int h;
int a;
for (h = 0 ; h <= 23 ; h++)
{
for (a = 0 ; a <= 59 ; a++)
{
_putchar(h / 10 + '0');
_putchar(h % 10 + '0');
_putchar(':');
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
_putchar('\n');
}
}
}
