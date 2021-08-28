#include "holberton.h"
/**
 * c_t_size - returns number of delim
 * @str: user's command typed into shell
 * @delm: delimeter (e.g. " ");
 * Return: number of tokens
 */
int c_t_size(char *str, char delm)
{
	int i = 0, num_delm = 0;

	while (str[i] != '\0')
	{
		if (str[i] == delm)
			num_delm++;
		i++;
	}
	return (num_delm);
}