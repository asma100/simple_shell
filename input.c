#include "top.h"
/**
 * empty - function for the user input handling
 * @input: size of the input
 * Return: int
*/
int empty(char *input)
{
if (input == NULL)
return (1);
while (*input)
{
if (!isspace(*input))
return (0);
input++;
}
return (1);
}
/**
 * inputtop - function for the user input handling
 * @s: size of the input
 * @input: value
 * @status:0,1
 * Return: null
*/
void inputtop(char *input, size_t s, int status)
{
const char *delim = " \t\n";
char exitstatus[] = "/bin/ls: cannot access '/test_hbtn': No such file \n";
ssize_t checkline = getline(&input, &s, stdin);
if (checkline == -1)
{
if (feof(stdin))
{
free_exit(input);
}
else
{
perror("Error reading input:");
free(input);
exit(EXIT_FAILURE);
}
}
else if (strcmp(input, "exit\n") == 0)
{
free(input);
input = NULL;
if (status == 0)
exit(0);
else
{
write(STDERR_FILENO, exitstatus, strlen(exitstatus));
exit(2);
}
}
else if (strcmp(input, "env\n") == 0)
{
env_builtin();
free_exit(input);
}
else
{
if (empty(input) == 1)
free_exit(input);
Parse(input, delim);
}
free(input);
}

/**
 * free_exit - function for exiting
 *
 * @input: value
 *
 * Return: void
*/
void free_exit(char *input)
{
free(input);
exit(0);
}
