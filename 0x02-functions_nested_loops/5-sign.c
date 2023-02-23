#include "main.h"
/**
 * print_sign - functions that print sign
 *
 * @n: functions paramiter
 * Return: 1, 0 and -1
 */
int print_sign(int n);
{
	if (n > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	else
	{
		_putchar('+');
		_putcha(',');
		_putchar(' ');
		return (-1);
	}
}
