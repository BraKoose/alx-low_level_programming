#include "main.h"

/**
 * print alphabest a-z with _putchar in lowercase
 *
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
