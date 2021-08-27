#include "holberton.h"
/**
 * _strcpy - copies a string
 * @dest: destiny
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	for (l = 0; src[l] != '\0'; l++)
		;
	for (i = 0; i <= l; i++)
		dest[i] = src[i];
	return (dest);
}
