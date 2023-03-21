#include"main.h"
#include <ctype.h>
/**
 *_islower- lsvnkbnsdk
 *@c: valuue to check.
 * Description:it check the state of the number.
 *
 * Return: a number
 */

int _islower(int c)
{
	char ch;

	ch = tolower(c);
	if (c != ch || c == 0 || c == 20)
	{
		return (0);
	}
	if (c == ch)
	{
		return (1);
	}
	return (0);
}
