#include "holberton.h"
#include <stdlib.h>

/**
 * words - counts the number of words in a string.
 * @s: string.
 * Return: number of words.
 */
int words(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, ch = 0;
	char **token;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = words(str);
	if (n == 1)
		return (NULL);
	 token = (char **)malloc(n * sizeof(char *));
	if (token == NULL)
		return (NULL);
	token[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			token[ch] = (char *)malloc(j * sizeof(char));
			j--;
			if (token[ch] == NULL)
			{
				for (k = 0; k < ch; k++)
					free(token[k]);
				free(token[n - 1]);
				free(token);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				token[ch][l] = str[i + l];
			token[ch][l] = '\0';
			ch++;
			i += j;
		}
		else
			i++;
	}
	return (token);
}
