#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number
 * @i: Represent the number
 * Return: int
 */
int print_last_digit(int i)
{
int n;
n = (i % 10);
_putchar(n);
return (n);
}
