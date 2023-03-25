#include "main.h"
/**
 * printf_octal - print o specifier
 *
 * @num: input
 * @count: num of chars printed
 * Return: num of chars printed
 */
int printf_octal(unsigned int num, int count)
{
	int i = 0, j, zeros;
	char octal[32];

	if (count <= 0)
	{
		return (-1);
	}
	do {
		octal[i++] = '0' + (num % 8);
		num /= 8;
	}
	while (num > 0)
	zeros = count - i;
	for (j = 0; j < zeros; j++)
	{
		putchar('0');
	}
	for (j = i - 1; j >= 0; j--)
	{
		putchar(octal[j]);
	}
	return (count);
}
