#include<stdio.h>
/**
 * main- code for all
 *
 * Description: print numbers without printf
 *
 * Return: 0
 *
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
