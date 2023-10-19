#include "top.h"
/**
 * print_top - function that print
 * @top: pointer to  printed value
 * Return: nothing cuz void
 */
void print_top(char *top)
{
write(STDOUT_FILENO, top, _strlen(top));
}
/**
 * _strlen - function that calculate the length
 * @s: pointer to string length
 * Return: cou
 */
size_t _strlen(const char *s)
{
int cou = 0;
while (*s != '\0')
{
s++;
cou++;
}
return (cou);
}
