#include "shell.h"

/**
 * bfree - this makes the pointer free and the address NULL
 * @ptr: this is the pointer to be freed
 *
 * Return: 1 (freed), 0 otherwise
 */
int bfree(void **ptr)
{
if (ptr && *ptr)
{
free(*ptr);
*ptr = NULL;
return (1);
}
return (0);
}
