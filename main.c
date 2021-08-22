#include "holberton.h"
/**
 * main - calls shell
 * Return: 0
 */
int main(int argc __attribute__((unused)),
		char **argv __attribute__((unused)),char **en)
{
	list_t *env;
	size_t i = 0, n = 0;
	int command_line_no = 0, exit_stat = 0;
	char *command, *n_command, **token;

	env = env_linked_list(en);

	do{
		if(isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "($) ", 4);
		/*else
			non_interactive(env);
*/
		signal(SIGINT, ctrl_c);
		command = NULL; i = 0;
		i = get_line(&command);
		ctrl_D(i, command, env);
		n_command = command;
		command = ignore_space(command);
		n = 0;
		while (command[n] != '\n')
			n++;
		command[n] = '\0';
		if (command[0] == '\0')
		{
			free(n_command); continue;
		}
		token = NULL;
		token = c_str_tok(command, " ");
		if (n_command != NULL)
			free(n_command);
		exit_stat = built_in(token, env, command_line_no, NULL);
		if (exit_stat)
			continue;
		exit_stat = _execve(token, env, command_line_no);
	} while (1);
	return (exit_stat);
}
