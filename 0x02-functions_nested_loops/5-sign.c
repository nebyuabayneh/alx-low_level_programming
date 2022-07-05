#include <unistd.h>
#include "main.h"

/**
 * print_sign - Check the code
 * Description: check wheather a number is a positive,
 * negative or zero
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
    char tester;

    if (tester > 0){
        _putchar('+');
    }
    else if (tester < 0)
    {
        /* code */
        _putchar('-');
    }
    else
    {
        /* code */
        _putchar('0');
    }
    return(tester);
}
