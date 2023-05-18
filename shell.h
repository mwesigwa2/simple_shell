#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>

extern char **environ;

void interactive(int argc, char **argv, char **envp);
void non_interactive(int argc, char **argv, char **envp);
char **input_parser(char *lineptr, const char *delim, int *no_tokens);
int no_token(char *lineptr, const char *delim);
int is_env(char **argv);
void is_exit(char **argv, char *lineptr, char *lineptr_cpy, int no_tokens);
void exec(char **argv, char **envp, int d);
char *location(char *command, int *m);
void *sanitize(char **argv);
void *sanitize_malloc(size_t size);
char _putchar(char c);
void _puts(char *str);
void cd_cmd(char **argv);
void execmd(char *command, char **argv, char **envp);
int _setenv(const char *name, const char *value, int overwrite);
int _unsetenv(const char *name);
int com(char *command, char **argv, int d);
int _atoi(char *str);
int _strlen(const char *str);
char *_strchr(const char *s, char c);
void err(char **argv, int d);

#endif
