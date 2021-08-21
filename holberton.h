#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

typedef struct list
{
	char *var;
	struct list *next;
} list_t;

void print_prompt1(void);
void print_prompt2(void);
char *read_cmd(void);

#endif
