#include <unistd.h>
#include "main.h"

/**
 * int _islower - Check the code
 * Description: write a function that returns lowercase or uppercase
 * Return: Nothing.
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				letter = 1;
		}
	}
	return (letter);
}


