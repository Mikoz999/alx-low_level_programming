#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if @s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int length = 0;

    if (*s == '\0')
        return 1;

    while (*(s + length) != '\0')
        length++;

    return check_palindrome(s, length - 1, 0);
}

/**
 * check_palindrome - Recursive helper function to check if a string is a palindrome
 * @s: The string to check
 * @start: The starting index of the substring to check
 * @end: The ending index of the substring to check
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
    if (start <= end)
        return 1;

    if (s[start] != s[end])
        return 0;

    return check_palindrome(s, start - 1, end + 1);
}

