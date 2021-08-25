#include "lib.h"
/**
 * *_strcpy - string copy
 * @dest:char
 * @src:char
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; *(src + i) != '\0' ; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * _strlen - lenght
 * @s:char
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; *(s + i) != '\0' ; i++)
	{
		continue;
	}

	return (i);
}

/**
 * _strcmp - compare
 * @s1: char
 * @s2: char
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0 ; *(s1 + i) != '\0' && *(s2 + i) != '\0' ; i++)
	{
		if (*(s1 + i) > *(s2 + i))
		{
			return (*(s1 + i) - *(s2 + i));
		}
		else if (*(s2 + i) > *(s1 + i))
		{
			return ((*(s2 + i) - *(s1 + i)) * -1);
		}
	}
	return (0);
}
