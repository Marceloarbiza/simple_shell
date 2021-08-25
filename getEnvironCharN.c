#include "lib.h"
/**
  * getEnviron - Get all the enviroment from the external variable "environ"
  * Return: Array of strings of the environ
  */
char **getEnviron()
{
	int i = 0, j = 0, len;
	char **envT;

	for (; environ[i]; i++)
		;

	envT = malloc(sizeof(char *) * i);

	for (; j < i; j++)
	{
		len = _strlen(environ[j]);
		envT[j] = malloc(sizeof(char) * len);
		_strcpy(envT[j], environ[j]);
		len = 0;
	}
	return (envT);
}

/**
  * compEnv - get the PATH without "PATH="
  * Return: PATH without "PATH="
  */
char *compEnv()
{
	int len = 0;
	char *pa;
	char **p = getEnviron();

	len = _strlen(p[12] + 5);

	pa = malloc(sizeof(char) * len);

	_strcpy(pa, p[12] + 5);

	return (pa);
}
