#ifndef HOLBERTON_H
#define HOLBERTON_H
#define _XOPEN_SOURCE_700
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <signal.h>

int _strlen(char *str);
char *_getenv(const char *name, char **environ);
char **print_dir(char *str);
char *append(char *path, char *name);
char *is_exec(char **path, char *name);
int _strcmp(char *s1, char *s2);
char *_strdup(char *str);
int token_count(char *str);
char **ret_array(char *string);
char *built_in(char *input, char **environment);
void fork_execute(char *program, char **parameters, char *root_program);
int dir_count(char *str);

#endif
