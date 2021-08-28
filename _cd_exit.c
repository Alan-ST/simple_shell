#include "holberton.h"
/**
 * c_exit - frees user's typed command and linked list before exiting
 * @str: user's typed command
 * @env: input the linked list of envirnment
 */
void c_exit(char **str, list_t *env)
{
	free_double_ptr(str);
	free_linked_list(env);
	_exit(0);
}