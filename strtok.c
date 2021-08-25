#include "lib.h"
/**
  * qStrtok - Returns the number of input tokens separated by " "
  * @c: A string of the input
  * Return: The number of input tokens separated by " "
  */
int qStrtok(char *c)
{
	char *copy;

	char *tok;
	int i = 0, j = 0;

	for (; c[j]; j++)
		;

	copy = malloc(sizeof(char) * (j + 1));
	_strcpy(copy, c);
	copy[j] = '\0';
	if (c)
	{
		tok = strtok(copy, " ");
		if (tok)
		{
			while (tok)
			{
				i++;
				tok = strtok(NULL, " ");
			}
		}
	}
	free(copy);
	return (i);
}

