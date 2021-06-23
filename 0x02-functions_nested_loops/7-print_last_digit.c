#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @i: Represent the number
 * Return: int
 */
int print_last_digit(int i)
{
i = i % 10;
if (i < 0)
{
i = (i * (-1));
}
_putchar(i + '0');
return (i);
}
