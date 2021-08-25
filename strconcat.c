#include "lib.h"
/**
 * str_concat - concat
 *@s1: char
 *@s2: char
 *
 *Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, m, len;
	char *p = NULL;

	i = 0;
	j = 0;

	if (s1)
	{
		for (i = 0 ; *(s1 + i) != '\0' ; i++)
			;
	}

	if (s2)
	{
		for (j = 0 ; *(s2 + j) != '\0' ; j++)
			;
	}
		len = i + j;
		p = malloc(sizeof(char) * (len + 1));

		if (p)
		{
			k = 0;
			m = 0;

			for (k = 0 ; k < i ; k++)
			{
				*(p + k) = *(s1 + k);
			}

			for (k = i ; k < len ; k++)
			{
				*(p + k) = *(s2 + m);
				m++;
			}

			*(p + len) = '\0';
		}

	return (p);
}
