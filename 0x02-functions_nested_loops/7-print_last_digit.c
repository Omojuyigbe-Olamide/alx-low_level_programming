#include "main.h"

/**
 *print_last_digit - prints the last of a number
 *
 *@r: stores the last digit and goes through the condtional statements
 *
 *main - evaluates last digit
 *
 *Return: the value of the last digit
 */

int print_last_digit(int r)

{
	int d;

	if (r < 0)
		d = -1 * (r % 10);
	else
		d = r % 10;
	_putchar((d % 10) + '0');
	return (d % 10);
}
