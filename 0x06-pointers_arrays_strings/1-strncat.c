#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: pointer for the first string we want to change
 *@src: pointer  for the second string
 *@n: number of bytes
 *
 *Return: the new string with n bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	int lon;
	int j;

	for (lon = 0; dest[lon] != '\0'; lon++)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[lon] = src[j];
		lon++;
	}
	dest[lon] = '\0';
	return (dest);
}
