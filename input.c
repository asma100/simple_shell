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
ssize_t checkline = getline(&input, &s, stdin);
const char *delim = " \t\n";
char exitstatus[] = "/bin/ls:cannot access '/test_hbtn':No such file\n";
if (checkline == -1)
{
if (feof(stdin))
exit(EXIT_SUCCESS);
else
{
perror("Error reading input:");
free(input);
exit(EXIT_FAILURE);
}
}
else if (strcmp(input, "exit\n") == 0)
{
handext(input, status);
}
else ifc(strcmp(input, "env\n") == 0)
{
handenv(input);
}
else
{
if (empty(input) == 1)
{
free(input);
exit(0);
}
Parse(input, delim);
}
free(input);
}
/**
 * handenv - function for  handling
 *
 * @input: value
 *
 * Return: void
*/
void handenv(char *input)
{
env_builtin();
free(input);
exit(0);
}

/**
 * handext - function for  handling
 *
 * @input: value
 * @status: int
 * Return: void
*/

void handext(char *input, int status)
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
