#include "main.h"
#include <ctype.h>
/**
 * _isalpha- to check for alphabetical charaters
 * @c: value to be checked
 *
 * Description: it is to give th required result
 *
 * Return: 0
 */

int _isalpha(int c)
{
	int ch;

	ch = isalpha(c);

	if (ch != 0)
	{
		return (1);
	}
	if (ch == 0)
	{
		return (0);
	}
	return (0);
}
