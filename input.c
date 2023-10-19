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
<<<<<<< HEAD
ssize_t checkline;
const char *delim = " \t\n";
char exitstatus[] = "/bin/ls: cannot access '/test_hbtn': No such file or directory\n";
checkline = getline(&input, &s, stdin);
if (checkline == -1) {
=======
ssize_t checkline = getline(&input, &s, stdin);


if (checkline == -1)
{
>>>>>>> 9af10ea0f4a5fc30ba41df9bba04251fc2349e0b
if (feof(stdin))
{
free(input);
exit(EXIT_SUCCESS);
}
else
{
perror("Error reading input:");
<<<<<<< HEAD
=======
exit(EXIT_FAILURE);
>>>>>>> 9af10ea0f4a5fc30ba41df9bba04251fc2349e0b
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
exit (2);
}
}
else if (strcmp(input, "env\n") == 0)
{
env_builtin();
free(input);
exit (0);
}
else
{
<<<<<<< HEAD
=======
 Parse(input, delim);
  
>>>>>>> 9af10ea0f4a5fc30ba41df9bba04251fc2349e0b
if (empty(input) == 1)
{
free(input);
exit(0);
}
Parse(input, delim);
}
free(input);
}
<<<<<<< HEAD
=======
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
char exitstatus[] = "/bin/ls:cannot access '/test_hbtn':No such file\n";
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
>>>>>>> 9af10ea0f4a5fc30ba41df9bba04251fc2349e0b
