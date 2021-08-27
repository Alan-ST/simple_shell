#include "holberton.h"
/**
 * _strcat - concatenate two strings
 * @dest: destiny
 * @src: source
 * Return: str
 */

char *_strcat(char *dest, char *src)
{
	int l = 0;
	int l2 = 0;
	int total_len = 0;
	int j = 0;

	while (dest[l] != '\0')
	{
		l++;
		total_len++;
	}
	while (src[l2] != '\0')
	{
		l2++;
		total_len++;
	}

	dest = _realloc(dest, l, sizeof(char) * total_len + 1);

	while (src[j] != '\0')
	{
		dest[l] = src[j];
		l++;
		j++;
	}
	dest[l] = '\0';

	return (dest);
}
