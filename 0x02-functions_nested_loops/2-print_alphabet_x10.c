#include"main.h"
/**
 * print_alphabet_x10- linsf
 *
 * Description: lifhodf
 *
 * Return: null
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
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
}


