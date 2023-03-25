#include "main.h"

/**
 * print_line - prints a straight line in the terminal
 * @n: the length of the line to print
 */
void print_line(int n)
{
  int i;

  for (i = 0; i < n; i++)
    {
      _putchar('_');
    }
  _putchar('\n');
}

