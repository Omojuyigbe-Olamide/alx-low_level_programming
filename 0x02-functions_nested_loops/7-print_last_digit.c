#include "main.h"
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
