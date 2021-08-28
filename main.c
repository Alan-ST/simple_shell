#include "holberton.h"
/**
 * main - creates a simple shell
 * @ac: arg count
 * @av: arg vectors
 * @env: env variables
 * Return: 0 on success
 */
int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;

	prompt(env);
	return (0);
}