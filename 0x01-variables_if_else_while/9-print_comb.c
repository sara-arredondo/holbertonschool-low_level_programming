#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)

{
	int i;

	for (i = 48 ; i <= 57 ; i++)
	{
		putchar(i);
		if (i <= 56)
		{
		putchar(',');
		putchar(' ');
	}
	}
	return (0);
}
