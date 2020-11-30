#include "holberton.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: the addre
 * @height: height of the grid
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	char *array;
	int i, j, k, count;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for(i = 0; i < ac; i++)
	{
		for(j = 0;av[i][j]; j++)
		{
			count++;
		}
	}

	printf ("ac + count = %d\n", count + ac);

	array = malloc(sizeof(char *) * ac + count);

	if(!array)
	{
		return (NULL);
	}

	for(i = 1; i < ac; i++)
	{
		k++;
		for(j = 0; av[i][j]; j++, k++)
		{
			array[k] = av[i][j];
			/*printf("%s\n", array);*/
		}
			k++;
			array[k] = '\n';
	}
	/*printf("%s\n", array);*/
	return(array);
}
