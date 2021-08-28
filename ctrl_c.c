#include "holberton.h"
/**
 * ctrl_c - ignore Ctrl-C input and prints prompt again
 * @n: unused
 */
void ctrl_c(int n)
{
	(void)n;
	write(STDOUT_FILENO, "\n$ ", 3);
}