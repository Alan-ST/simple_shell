#include "holberton.h"
/**
 * cd_only - change directory to home
 * @env: bring in environmental linked list to update PATH and OLDPWD
 * @current: bring in current working directotry
 */
void cd_only(list_t *env, char *current)
{
	char *home = NULL;

	home = get_env("HOME", env);
	c_setenv(&env, "OLDPWD", current);
	free(current);
	if (access(home, F_OK) == 0)
		chdir(home);
	current = NULL;
	current = getcwd(current, 0);
	c_setenv(&env, "PWD", current);
	free(current);
	free(home);
}