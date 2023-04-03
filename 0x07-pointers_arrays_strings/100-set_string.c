#include "main.h"

/**
 * set_string - sets the value of a pointer to a string
 * @s: pointer to the source string
 * @to: pointer to the string to be set
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
    *s = to;
}

