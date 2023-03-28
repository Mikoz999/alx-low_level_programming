#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[]) {
    srand(time(NULL));

    /* Generate password with a sum of characters equal to 2772 */
    int sum = 0;
    while (sum < 2772) {
        int r = rand() % 62;
        if (r < 10) {
            putchar('0' + r);
            sum += r;
        } else if (r < 36) {
            putchar('a' + r - 10);
            sum += r - 10;
        } else {
            putchar('A' + r - 36);
            sum += r - 36;
        }
    }
    putchar('\n');
    return 0;
}

