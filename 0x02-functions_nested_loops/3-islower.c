#include <unistd.h>
#include "main.h"

/**
 * int _islower - Check the code
 * Description: return 1 if c is lowercase otherwise return 0
 * Return: Nothing.
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}

