#include "holberton.h"
/**
 * cd_execute - executes the cd
 * @env: bring in environmental linked list to update PATH and OLDPWD
 * @current: bring in current working directotry
 * @dir: bring in directory path to change to
 * @str: bring in the 1st argument to write out error
 * @num: bring in the line number to write out error
 * Return: 0 if success 2 if fail
 */
int cd_execute(list_t *env, char *current, char *dir, char *str, int num)
{
	int i = 0;

	if (access(dir, F_OK) == 0)
	{
		c_setenv(&env, "OLDPWD", current);
		free(current);
		chdir(dir);
		current = NULL;
		current = getcwd(current, 0);
		c_setenv(&env, "PWD", current);
		free(current);
	}
	else
	{
		cant_cd_to(str, num, env);
		free(current);
		i = 2;
	}
	return (i);
}