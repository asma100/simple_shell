#include "top.h"
void env_builtin()
{
char **env;
for (env = environ; *env != NULL; env++)
{
printf("%s\n", *env);
}
}
