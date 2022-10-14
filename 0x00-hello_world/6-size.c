#include <stdio.h>
/**
 *  main - program begins from this function
 *  Return: gives 0 as value
 */

int main(void)

{
	int e;
	long int f;
	long long int g;
	char h;
	float i;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(g));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(i));
		return (0);

}
