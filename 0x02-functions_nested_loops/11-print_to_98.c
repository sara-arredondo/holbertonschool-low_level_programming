#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 -  Prints all natural numbers from n to 98.
 * @n: value of number
 * Return: void
 */
void print_to_98(int n)
{
int valor = n;
if (valor < 98)
{
for (; valor <= 98; valor++)
{
if (valor != 98)
{
printf("%i, ", valor);
}
else
{
printf("%i", valor);
}
}
}
else if (valor > 98)
{
for (; valor >= 98 ; valor--)
{
if (valor != 98)
{
printf("%i, ", valor);
}
else
{
printf("%i", valor);
}
}
}
else
{
printf("%i", valor);
}
_putchar('\n');
}
