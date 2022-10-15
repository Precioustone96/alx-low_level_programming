#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - my function for randon number assignment to n starts here
 * Return: - expected output is 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if  (n == 0)
	{
	printf("%d is zero\n")
	}
	else
	{
	printf("%d is negative\n")
	}
	return (0);
}
