#include <stdio.h>
/**
 * main - prints all possible different combinations of two doigits
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int ones = 0;
	int tens = '0';

	for (tens = '0'; tens <= '9'; tens++)/*prints tens digit*/
	{
		for (ones = '0'; ones <= '9'; ones++)/*prints ones digit*/
		{
			if (!((ones == tens) || (tens > ones)))/*eliminates repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '9' && tens == '8'))/*adds comma and space*/
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
					
