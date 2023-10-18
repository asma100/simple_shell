#include "top.h"
/**
 * inputtop - function for the user input handling
 * @s: size of the input
 * @input: value
 * Return: null
*/
void inputtop(char *input, size_t s) {
ssize_t checkline;
 const char *delim = " \t\n";
 checkline = getline(&input, &s, stdin);
  if (checkline == -1) {
   if (feof(stdin)) {
           
            exit(EXIT_SUCCESS);
        } else {
      perror("Error reading input:");
      free(input);
      exit(EXIT_FAILURE);
    }}
  else if (checkline == 1 && input[0] == '\n') {
    /* empty input, do nothing*/
    free(input);
    input = NULL;
    return ;
  } else if (strcmp(input, "exit\n") == 0) {
    /* user wants to exit the program */
    free(input);
    input = NULL;
    exit(EXIT_SUCCESS);
  }
 else if (strcmp(input, "env\n")==0)
 {
  env_builtin();
  exit(0);
 }
 else
{
Parse(input,delim);
}
 free(input);
}
