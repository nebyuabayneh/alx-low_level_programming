#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line
 * @str: declaration of *str and paramters for the function _puts
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
