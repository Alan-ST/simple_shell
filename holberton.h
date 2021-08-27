#ifndef HOLBERTON_H
#define HOLBERTON_H

#define EOF             (-1)
#define ERRCHAR         ( 0)

#define INIT_SRC_POS    (-2)

#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

struct source_s
{
    char *buffer;       /* the input text */
    long bufsize;       /* size of the input text */
    long  curpos;       /* absolute char position in source */
};

typedef struct list
{
	char *var;
	struct list *next;
} list_t;

int prompt(char **env);
int numlen(int n);
int built_in(char **token, list_t *env, int num, char **command);
int c_atoi(char *s);
int __exit(char **s, list_t *env, int num, char **command);
int _execve(char *argv[], list_t *env, int num);
int delete_nodeint_at_index(list_t **head, int index);
int _env(char **str, list_t *env);
int t_strlen(char *str, int pos, char delm);
int t_size(char *str, char delm);
int delete_nodeint_at_index(list_t **head, int index);
int _unsetenv(list_t **env, char **str);
int _setenv(list_t **env, char **str);
int find_env(list_t *env, char *str);
int _cd(char **str, list_t *env, int num);
int c_t_size(char *str, char delm);

char *ignore_delm(char *str, char delm);
char *get_env(char *str, list_t *env);
char **c_str_tok(char *str, char *delm);
char *ignore_space(char *str);
char *int_to_string(int number);
char *_which(char *str, list_t *env);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);

void free_double_ptr(char **str);
void ctrl_D(int i, char *command, list_t *env);
void free_linked_list(list_t *list);
void not_found(char *str, int num, list_t *env);
void ctrl_c(int n);
void cant_cd_to(char *str, int c_n, list_t *env);
void illegal_number(char *str, int c_n, list_t *env);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void c_exit(char **str, list_t *env);
size_t get_line(char **str);
size_t print_list(list_t *n);
list_t *add_end_node(list_t **head, char *str);
list_t *env_linked_list(char **env);

#endif
