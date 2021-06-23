#include "holberton.h"

/**
 * _isalpha - check if a letter is lowercase
 * @c: Represent the value of the letter
 * Return: int c
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
