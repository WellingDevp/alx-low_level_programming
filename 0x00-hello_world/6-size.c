#include <stdio.f>

/**
 * main - prints the size of various types of computer
 *
 * Return: Always returns 0
 */

int main(void)

{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	print("Size of a long int: %lu byte(s)", sizeof(long int));
	print("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
