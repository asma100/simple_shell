#ifndef TOP
#define TOP
#include <stddef.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <ctype.h>
#include <fcntl.h>

void  handle_logicalop(char **argv);
char *comm(char *input);
void free_exit(char *input);
void empchack(char *input, char  *input_cp);
void freep(char **arrc, char *input_cp, int u);
extern char **environ;
void handext(char *input, int status);
void handenv(char *input);
void print_top(char *top);
void inputtop(char *input, size_t s, int status);
void env_builtin(void);
int empty(char *input);
void print_top(char *top);
void topcmd(char **argv);
void Parse(char *input, const char *delim);
char *finding_path(char *command);
void env_builtin(void);
void print_error(const char *message);
int _strlen(char *s);
void parsetok(char *input_cp, char *input);
extern char **environ;
char **comment(char **arr, int tok_counter);
#define MAX_ARGS 128
void newline(char *input);



#endif
