#include <stdio.h>

/**
 * main - prints the size of various types of computer
 *
 * Return: Always returns 0
 */

int main(void)

{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	print("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	print("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
