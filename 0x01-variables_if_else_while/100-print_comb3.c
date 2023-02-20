#include <stdio.h>

/**
 * main - prints numbers with two digits from 00 to 99
 * Return: Always 0
 */
int main(void)
{
	int d1;
	int d2;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = 0; d2 < 10; d2++)
		{
			if ((d1 % 10) < (d2 % 10))
			{
				putchar((d1 % 10) + '0');
				putchar((d2 % 10) + '0');

				if (d1 != 8 || d2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);

}
