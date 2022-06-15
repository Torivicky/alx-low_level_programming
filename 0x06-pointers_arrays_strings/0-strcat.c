#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: char pointer variable
 * @src: char pointer variable
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int u, p;

	for (u = 0; dest[u] != '\0'; u++)
		;
	for (p = 0; src[p] != '\0'; p++)

		dest[u + p] = src[p];

	dest[u + p] = '\0';

	return (dest);
}
