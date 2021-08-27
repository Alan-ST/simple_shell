#include "holberton.h"
/**
 * _strdup - duplicates a string
 * @str: string
 * Return: str
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, l = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + l))
		l++;
	l++;

	dup_str = malloc(sizeof(char) * l);
	if (dup_str == NULL)
		return (NULL);

	i = 0;
	while (i < l)
	{
		*(dup_str + i) = *(str + i);
		i++;
	}

	return (dup_str);
}
