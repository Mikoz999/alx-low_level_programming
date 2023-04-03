#include <stdio.h>
/**
 * strlen - caculate the length of a string
 * @s - the string to calculate the length
 * Return: string length
 */

int _strlen(char *s)
{
  int i, len = 0;
  for (i = 0; s[i] != '\0'; i++)
  {
    len++;
  }
  return len;
}
