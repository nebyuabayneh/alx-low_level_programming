#include <unistd.h>
#include "main.h"

/**
 * int _islower - Check the code
 * Description: return 1 if c is lowercase otherwise return 0
 * Return: Nothing.
 */
int _islower(int c)
{
    return(c <'a' && c > 'z');
}
