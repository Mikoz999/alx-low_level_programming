#include <stdio.h>

/**
 * before_main - Function executed before the main function.
 *
 * Description: This function is executed automatically before the main
 *              function is called. It prints the desired message.
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

