#include<stdio.h>
/**
 * main- to check a condition
 *
 * Description: it is copmoareting the code
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
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar(ch);
	return (0);
}
