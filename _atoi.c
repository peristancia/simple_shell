#include "shell.h"

/**
 * interactive - it returns true if shell is interactive mode
 * @info: the parameter struct address
 *
 * Return: 1 (interactive), 0 otherwise
 */
int interactive(info_t *info)
{
return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - this checks if character is a delimeter
 * @c: the checker
 * @delim: this is the delimeter string
 * Return: 1(true), (false)
 */
int is_delim(char c, char *delim)
{
while (*delim)
if (*delim++ == c)
return (1);
return (0);
}

/**
 *_isalpha - it checks for alphabetic character
 *@c: The input character
 *Return: 1 (c is alphabetic), 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}

/**
 *_atoi - it converts a string to an integer
 *@s: the covertable string
 *Return: 0 (no numbers), converted number otherwise
 */

int _atoi(char *s)
{
int i, sign = 1, flag = 0, output;
unsigned int result = 0;

for (i = 0;  s[i] != '\0' && flag != 2; i++)
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
flag = 1;
result *= 10;
result += (s[i] - '0');
}
else if (flag == 1)
flag = 2;
}

if (sign == -1)
output = -result;
else
output = result;

return (output);
}