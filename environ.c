#include "shell.h"

/**
 * _myenv - this prints the current environ
 * @info: this struct contains potential arguments.
 * Return: Always 0 (success)
 */
int _myenv(info_t *info)
{
print_list_str(info->env);
return (0);
}

/**
 * _getenv -this gets the value of an environ variable
 * @info: this struct contains potential arguments.
 * @name:this is the env var name
 *
 * Return: the value
 */
char *_getenv(info_t *info, const char *name)
{
list_t *node = info->env;
char *q;

while (node)
{
q = starts_with(node->str, name);
if (q && *q)
return (q);
node = node->next;
}
return (NULL);
}

/**
 * _mysetenv - this initializes a new environment variable,
 *             or modify an existing one
 * @info: this struct contains potential arguments.
 * Return: Always 0 (success)
 */
int _mysetenv(info_t *info)
{
if (info->argc != 3)
{
_eputs("Incorrect number of arguements\n");
return (1);
}
if (_setenv(info, info->argv[1], info->argv[2]))
return (0);
return (1);
}

/**
 * _myunsetenv - it removes an environment variable
 * @info: this struct contains potential arguments.
 * Return: Always 0 (success)
 */
int _myunsetenv(info_t *info)
{
int i;

if (info->argc == 1)
{
_eputs("Too few arguements.\n");
return (1);
}
for (i = 1; i <= info->argc; i++)
_unsetenv(info, info->argv[i]);

return (0);
}

/**
 * populate_env_list -it populates env linked list
 * @info: this structure contains potential arguments
 * Return: Always 0 (success)
 */
int populate_env_list(info_t *info)
{
list_t *node = NULL;
size_t i;

for (i = 0; environ[i]; i++)
add_node_end(&node, environ[i], 0);
info->env = node;
return (0);
}
