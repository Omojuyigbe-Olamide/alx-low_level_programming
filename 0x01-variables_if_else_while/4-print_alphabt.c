#include<stdio.h>
/**
 * main- code for all
 *
 * Description: print a to z
 *
 * Return: 0
 *
 */

int main(void)
{
	char alphabet;
	char ch;

	ch = '\n';
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{

		} else
		{
			putchar(alphabet);
		}
	}
	putchar(ch);
	return (0);
}
