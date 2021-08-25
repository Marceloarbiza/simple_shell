#include "lib.h"
/**
  * qStrtokPath - Returns the number of PATH tokens separated by :
  * @c: A string of the PATH
  * Return: The number of PATH tokens separated by :
  */
int qStrtokPath(char *c)
{
	char *copy;
	char *tok;
	int i = 0, j = 0;

	for (; c[j]; j++)
		;

	copy = malloc(sizeof(char) * j);

	_strcpy(copy, c);
	if (c)
	{
		tok = strtok(copy, ":");
		if (tok)
		{
			while (tok)
			{
				i++;
				tok = strtok(NULL, ":");
			}
		}
	}
	free(copy);
	return (i);
}

