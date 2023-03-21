#include "main.h"

/**
 *print_alphabet - check the code
 *Description: to print all alphabets form a to z in lowercase.
 *Return: Void.
 *
 */

void print_alphabet(void)
{
	char a = 'a';
	char term_x = 'z';

	while (a <= term_x)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
