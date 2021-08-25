#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>

extern char **environ;

int qStrtok(char *c);
int qStrtokPath(char *c);
char **strD2(char *c);
char **strD2Path(char *c);
char *getPath();
char *str_concat(char *s1, char *s2);
char **getEnviron();
char *compEnv();
char **concPath(char **p, char *s);
char *string_nconcat(char *s1, char *s2);
int executen(char **d, char **a);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);

#endif
