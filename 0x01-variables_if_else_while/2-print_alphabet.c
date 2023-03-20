#include<stdio.h>
/**
 * main - all codes
 *
 * Description:A program that prints alphabets in lowercase follwed by a line
 *
 * Return: 0
 *
 */

int main(void)
{
	char alphabets;
	char ch;

	ch = '\n';

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar(ch);

	return (0);
}
