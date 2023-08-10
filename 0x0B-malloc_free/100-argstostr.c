#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: Number of arguments
 * @av: Array of pointers to arguments
 *
 * Return: Pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int total_length = 0;
	char *str;
	int i, j, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}

	str = malloc((total_length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k++] = av[i][j++];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
