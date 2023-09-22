#include "shell.h"

/**
 * _strlen - it returns the length of a string
 * @s: the string that checks the length.
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
int i = 0;

if (!s)
return (0);

while (*s++)
i++;
return (i);
}

/**
 * _strcmp - it performs comparison of two strangs.
 * @s1: the 1st strang
 * @s2: the 2nd strang
 *
 * Return: negative (s1 < s2), positive (s1 > s2) and zero (s1 == s2)
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
return (*s1 - *s2);
s1++;
s2++;
}
if (*s1 == *s2)
return (0);
else
return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - it checks if the needle starts with haystack
 * @haystack:  the string to be searched
 * @needle: the substring to be found
 *
 * Return: address of next character or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
while (*needle)
if (*needle++ != *haystack++)
return (NULL);
return ((char *)haystack);
}

/**
 * _strcat - it concatenates two strings
 * @dest: it is the destination buffer
 * @src: it is the source buffer
 *
 * Return: pointer to destination buffer
 */
char *_strcat(char *dest, char *src)
{
char *ret = dest;

while (*dest)
dest++;
while (*src)
*dest++ = *src++;
*dest = *src;
return (ret);
}
