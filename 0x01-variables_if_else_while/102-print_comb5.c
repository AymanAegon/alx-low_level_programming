#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if ((i - 48) * 10 + j - 48 < (k - 48) * 10 + l - 48)
					{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if ((i < 57) || (j < 56))
					{
						putchar(44);
						putchar(32);
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
