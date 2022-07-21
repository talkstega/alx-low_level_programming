#include "main.h"

/**
 * _strchr -  function that locates a character in a string.
 * @s: character string.
 * @c: character to highlight.
 * Return: s.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
