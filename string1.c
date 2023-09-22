#include "shell.h"

/**
 * _strcpy - it copies a string
 * @dest: this is the destination
 * @src: this isthe source
 *
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

if (dest == src || src == 0)
return (dest);
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = 0;
return (dest);
}

/**
 * _strdup - this returns a pointer to the duplicate string
 * @str: the duplicate string
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(const char *str)
{
int length = 0;
char *ret;

if (str == NULL)
return (NULL);
while (*str++)
length++;
ret = malloc(sizeof(char) * (length + 1));
if (!ret)
return (NULL);
for (length++; length--;)
ret[length] = *--str;
return (ret);
}

/**
 * _puts - this prints a string to the standard output
 * @str: the printable string
 *
 * Return: Nothing
 */
void _puts(char *str)
{
int i = 0;

if (!str)
return;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}

/**
 * _putchar - it writes a character to stdout
 * @c: The printable char
 *
 * Return: 1 (success), -1 (error) and errno set appropraitely.
 */
int _putchar(char c)
{
static int i;
static char buf[WRITE_BUF_SIZE];

if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(1, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (1);
}
