#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 */
void print_alphabet(void)
{
	char lc;

	for (lc = '97'; lc <= '122'; lc++)
		_putchar(lc);

	_putchar('\n');
}
