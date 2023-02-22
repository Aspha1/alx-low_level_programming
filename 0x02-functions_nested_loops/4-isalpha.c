#include "main.h"

/**
 * _isalpha - check for uppercase or lowercase
 * @c: character to be checked
 * Return: 1 if character is a letter, o if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' c <= 'Z'))
		return (1);
	else
		return (0);
}
