#include "holberton.h"

char *c_strdup(char *str, int cs)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + len))
		len++;
	len++;

	dup_str = malloc(sizeof(char) * (len - cs));
	if (dup_str == NULL)
		return (NULL);

	i = 0;
	while (i < (len - cs ))
	{
		*(dup_str + i) = * (str + cs + i);
		i++;
	}
	return (dup_str);
}

char *get_env(char *str, list_t *env)
{
	int j = 0, cs = 0;

	while (env != NULL)
	{
		j = 0;
		while ((env->var)[j] == str[j])
			j++;

		if (str[j] == '\0' &&(env->var)[j] == '=')
			break;
		env = env->next;
	}

	while (str[cs] != '\0')
		cs++;
	cs++;

	return (c_strdup(env->var, cs));
}


