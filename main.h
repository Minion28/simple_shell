#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>

/*global environment*/
extern char **environ;

/*shell.c*/
int simple(void);

/*get_line.c*/
char *line(char *x, size_t size);

/*tokenizer.c*/
char **tokenizer(char *x);
int count(char *x);

int execute(char **line_args);
void uninteract(void);

/*findpath.c*/
char *find_path(void);
char *pathfound(char *args);

/*function.strings.c*/
int _strncmp(char *a, char *b, size_t n);
int _strlen(char *s);
char *_strcpy(char *back, char *src);
int _strcmp(char *a, char *b);
char *_strdup(char *src);

/*concat.c*/
char *concat_path_with_line(char *args, char *y);
int _concat(char *path, char *y);

/*builtins.c*/
int builtin(char **arg, char *buf);
int execute_env(char **arg, char *buf);
int exitt(char **arg, char *buf);

#endif
