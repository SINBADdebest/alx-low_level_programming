#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * 	which contains a copy of the string given as a parameter.
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++);

	duplicate = malloc((len + 1)* sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
