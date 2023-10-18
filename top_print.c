#include "top.h"

void print_top(char *top)
{
write(STDOUT_FILENO, top, _strlen(top));
}
size_t _strlen(const char *s) {
 int cou = 0;
 while (*s != '\0') {
 s++;
 cou++;
 }
 return (cou);
}
