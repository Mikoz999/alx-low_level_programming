#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    int password[100];
    int sum = 0;
    int i, n;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
        password[i] = rand() % 78;

    for (i = 0; i < 100; i++)
    {
        sum += password[i];
        putchar(password[i] + '0');
        if (2772 - sum - password[i] < 78)
        {
            n = 2772 - sum - password[i];
            sum += n;
            putchar(n + '0');
            break;
        }
    }

    putchar('\n');
    fprintf(stderr, "%s", "Anything\n");

    printf("\n");

    return (0);
}

