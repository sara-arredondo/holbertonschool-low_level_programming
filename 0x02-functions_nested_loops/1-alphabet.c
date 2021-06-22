#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
