#include "top.h"
void env_builtin(void)
{
char **env;
for (env = environ; *env != NULL; env++)
{
printf("%s\n", *env);
}
}
