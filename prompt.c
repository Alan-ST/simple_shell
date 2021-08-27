#include "holberton.h"

void ctrl_c(int n __attribute__((unused)))
{
	write(STDOUT_FILENO, "\n($) ", 3);
}

void ctrl_D(int i, char *command, list_t *env)
{
	if (i == 0) /* handles Ctrl+D */
	{
		free(command); /* exit with newline if in shell */
		free_linked_list(env);
		if (isatty(STDIN_FILENO))/* ctrl+d prints newline */
			write(STDOUT_FILENO, "\n", 1);
		exit(0);
	}
}
char *ignore_space(char *str)
{
	while (*str == ' ')
		str++;

	return (str);

}
int built_in(char **token, list_t *env, int num, char **command)
{
	int i = 0;

	if (_strcmp(token[0], "exit") == 0)
		i = __exit(token, env, num, command);

	else if (_strcmp(token[0], "env") == 0)
	{
		_env(token, env);
		i = 1;
	}

	else if (_strcmp(token[0], "cd") == 0)
		i = _cd(token, env, num);

	else if (_strcmp(token[0], "setenv") == 0)
	{
		_setenv(&env, token);
		i = 1;
	}

	else if (_strcmp(token[0], "unsetenv") == 0)
	{
		_unsetenv(&env, token);
		i = 1;
	}
	return (i);

}

