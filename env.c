#include "top.h"
/**
 * env_builtin - function for the environ
 * @*env this is the environ variable
 * Return: void
*/
void env_builtin()
{
char **env;
for (env = environ; *env != NULL; env++)
{
printf("%s\n", *env);
}
}
