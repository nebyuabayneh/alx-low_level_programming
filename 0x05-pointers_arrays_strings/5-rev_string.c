#include <stdio.h>
/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int f_d, r_s;
	char character;

	for (f_d = '\0'; s[f_d] != 0; f_d++)
	{
	}
	r_s = 0;
	for (f_d = f_d - 1; r_s < f_d; r_s++)
	{
		character = s[f_d];
		s[f_d] = s[r_s];
		s[r_s] = character;
		f_d--;
	}
}
