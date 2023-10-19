#include "top.h"
/**
 * print_top - function that print
 * @top: pointer to  printed value
 * Return: nothing cuz void
 */
void print_top(char *top)
{
write(STDOUT_FILENO, top, strlen(top));
}
