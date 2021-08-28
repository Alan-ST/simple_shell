#include "holberton.h"
/**
 * ignore_space - return string without spaces in front
 * @str: string
 * Return: str
 */
char *ignore_space(char *str)
{
	while (*str == ' ')
		str++;
	return (str);
}