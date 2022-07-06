#include <stdlib.h>
#include <time.h>
#include "stdio.h"

/* more headers goes there */
/**
 * main - Check description
 * Description: To define wheather a random rumber is positive or negative
 * Return: Nothing.
 */
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;
	/* your code goes there */
	 if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
