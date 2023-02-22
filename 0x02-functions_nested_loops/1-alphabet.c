#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void);
{
	char lc;

	for (lc = 97; lc <= 122; lc++)
		_putchar(lc);

	_putchar('\n');

	return (0);
}
