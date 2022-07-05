#include <unistd.h>
#include "main.h"

/**
 * main - Print _putchar using the function called main
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */
int main(void)
{

	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');

	return (0);
}
