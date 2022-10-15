#include <stdio.h>
/**
 * main - point of entryfor my code
 * Return: 0
 */

int main(void)

{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	if (b != 'q' && b != 'e')
	putchar(b);
	putchar('\n');
	return (0);
}
