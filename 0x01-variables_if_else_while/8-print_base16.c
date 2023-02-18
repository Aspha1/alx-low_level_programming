#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lower case
 * Return: Always 0
 */
int main(void)
{
	int num;
	char sx;

	for (num = '0'; num <= '10'; num++)
		putchar((num % 10) + '0');

	for (sx = 'a'; sx <= 'f'; sx++)
		putchar(sx);

	putchar('\n');

	return (0);

}
