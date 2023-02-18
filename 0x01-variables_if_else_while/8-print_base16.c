#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lower case
 * Return: Always 0
 */
int main(void)
{
	char sx;

	for (sx = '0'; sx <= '10'; sx++)
		putchar(sx);

	for (sx = 'a'; sx <= 'f'; sx++)
		putchar(sx);

	putchar('\n');

	return (0);

}
