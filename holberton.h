#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>

/**
 * struct list - linked list for environmental variables
 * @var: variable string
 * @next: next node
 */
typedef struct list
{
	char *var;
	struct list *next;

} list_t;

int prompt(char **env);
int t_strlen(char *str, int pos, char delm);
int _strcmp(char *s1, char *s2);
int delete_nodeint_at_index(list_t **head, int index);
int _unsetenv(list_t **env, char **str);
int _setenv(list_t **env, char **str);
int find_env(list_t *env, char *str);
int _cd(char **str, list_t *env, int num);
int c_atoi(char *s);
int c_t_size(char *str, char delm);
int cd_execute(list_t *env, char *current, char *dir, char *str, int num);
int c_setenv(list_t **env, char *name, char *dir);
int built_in(char **token, list_t *env, int num, char **command);
int __exit(char **s, list_t *env, int num, char **command);
int _execve(char *argv[], list_t *env, int num);
int _env(char **str, list_t *env);
int numlen(int n);
char *get_env(char *str, list_t *env);
char *ignore_space(char *str);
char *c_ignore(char *str);
char **_str_tok(char *str, char *delm);
char **c_str_tok(char *str, char *delm);
char *_strcat(char *dest, char *src);
char *c_strcat(char *dest, char *src);
char *_strdup(char *str);
char *_strcpy(char *dest, char *src);
char *_which(char *str, list_t *env);
char *ignore_delm(char *str, char delm);
char *int_to_string(int num);
void c_exit(char **str, list_t *env);
void non_interactive(list_t *env);
void not_found(char *str, int num, list_t *env);
void cant_cd_to(char *str, int c_n, list_t *env);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void non_interactive(list_t *env);
void illegal_number(char *str, int c_n, list_t *env);
void free_double_ptr(char **str);
void ctrl_c(int n);
void free_linked_list(list_t *list);
void ctrl_d(int i, char *command, list_t *env);
void cd_only(list_t *env, char *current);
list_t *env_linked_list(char **env);
list_t *add_end_node(list_t **head, char *str);
size_t print_list(list_t *h);
size_t get_line(char **str);

#endif
