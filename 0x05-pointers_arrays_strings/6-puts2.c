#include <stdio.h>
#include <stdio.h>
#include <string.h>

/**
 * puts2 - function that prints every other string.
 * @str: declaration of *str and paramters for the function
 * Return: Always 0.
 */
void puts2(char *str)
{
	int len = 0, i = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (; i <= len; i += 2)
		putchar(str[i]);

	putchar('\n');
}
