#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: Represent the value of the number
 * Return: int
 */
int _abs(int i)
{
if (i > 0)
{
return (i);
}
else
{
i = (i * (-1));
return (i);
}
return (0);
}
