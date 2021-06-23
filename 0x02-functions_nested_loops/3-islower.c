#include "holberton.h"

/**
 * _islower - check if a letter is lowercase
 * @c: Represent the value of the letter
 * Return: int c
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
