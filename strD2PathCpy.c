#include "lib.h"
/**
  * strD2Path - Create an array of strings, each string is a token of the PATH
  * @c: A string of the PATH
  * Return: An array of strings of the PATH
  */
char **strD2Path(char *c)
{
	char **strD;
	char *copy, *tok;
	int j = 0, k = 0, q = 0, len = 0;

	for (; c[j]; j++)
		;

	copy = malloc(sizeof(char) * (j + 1));

	_strcpy(copy, c);
	copy[j] = '\0';

	if (c)
	{
		q = qStrtokPath(c);
		strD = malloc(sizeof(char *) * (q + 2));
		if (!strD)
			return (NULL);

		strD[q + 1] = NULL;
		tok = strtok(copy, ":");
		if (tok)
		{
			while (tok)
			{
				len = _strlen(tok);
				strD[k] = malloc(sizeof(char) * (len + 1));
				if (!strD)
					return (NULL);

				_strcpy(strD[k], tok);
				tok = strtok(NULL, ":");
				k++;
			}
			strD[k] = '\0';
		}
		strD[q] = " ";
	}
	free(copy);
	return (strD);
}

