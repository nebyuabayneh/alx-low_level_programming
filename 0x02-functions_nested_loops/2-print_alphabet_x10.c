#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase 10 times fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char i;
    int j;

    for ( i = 0; i <= 10; i++)
    {
        /* code */
            for (j = 'a'; j <= 'z'; j++)
		        _putchar(i);
	        _putchar('\n');
    }
}
