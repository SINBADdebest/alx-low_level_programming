#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Pointer to the new string, or NULL if fit fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len, total_len = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_len++;
		}
		total_len++;
	}

	str = malloc((total_len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len] != '\0'; len++)
		{
			str[k] = av[i][len];
			k++;
		}

		str[k] = '\n';
		k++;
	}
	
	str[k] = '\0';
	return (str);
}
