#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * positive_or_negative - prints a number
 * @i: intger
 * if the number is greater than 0: positive, if the number is 0: zero
 * if the number is less than 0: negative, followed by a nerw line
 * Return: Always 0 (success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
