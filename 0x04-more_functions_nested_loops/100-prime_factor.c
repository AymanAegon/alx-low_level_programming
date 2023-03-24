#include <stdio.h>
#include <math.h>
/**
* main -  finds and prints the largest prime factor of the number 612852475143
* 
* Return: Always 0
*/

int main(void)
{
	long long int i, n, ans;

	n = 612852475143;
	i = 2;
	while (i <= sqrt(n))
	{
		if (n % i == 0)
		{
			n = n / i;
			ans = i;
			i = 2;
		}
		else
			i++;
	}
	printf("%ld\n", ans);
    return (0);
}
