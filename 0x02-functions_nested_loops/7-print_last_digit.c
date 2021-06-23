#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @i: Represent the number
 * Return: int
 */
int print_last_digit(int i)
{
int n;

if (i >= 0)
{
n = i % 10;
_putchar(n);
return (n);
}
else
{
i = (i * (-1));
n = i % 10;
_putchar(n);
}
return (n);
}
