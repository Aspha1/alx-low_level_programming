#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void);
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
