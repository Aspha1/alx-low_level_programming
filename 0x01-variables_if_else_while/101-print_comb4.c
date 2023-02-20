#include <stdio.h>

/**
 * main - prints combination of three digits
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	int c;


	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; b < 10; c++)
			{
				if (a < b && b < c)
				{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar((c % 10) + '0');

					if (a != 7 || b != 8 || c != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);

}
