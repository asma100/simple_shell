#include "top.h"
/**
 * env_builtin - function for the environ
 * @*env this is the environ variable
 * Return: the coun number
*/
void env_builtin(void)
{
char **env;
for (env = environ; *env != NULL; env++)
{
printf("%s\n", *env);
}
}
