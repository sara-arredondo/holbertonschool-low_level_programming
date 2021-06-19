#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 9 (Sucess)
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

