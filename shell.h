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
