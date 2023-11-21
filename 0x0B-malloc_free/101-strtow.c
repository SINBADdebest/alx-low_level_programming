#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words
 * @str: Input string
 *
 * Return: Pointer to an array of strings (words), or NULL if failure
 */

char **strtow(char *str)
{
	char **words;
	int i, j, k, count, len;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = 0;
	count = 0; 

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	if (count == 0)
		return (NULL);

	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; u < countr=; i++)
	{
		while (str[len] == '')
			len++;

		for (j = len; str[j] != ' ' && str[j] != '\0'; j++);

		words[i] = malloc((j - len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < j - len; k++)
			words[i][k] = str[len + k];
		words[i][k] = '\0';

		len = j + 1;
	}

	words[count] = NULL;

	return (words);
}
