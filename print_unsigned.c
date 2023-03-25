#include "main.h"
/**
 * printf_unsigned - function to print u specifier
 *
 * @num: input
 * @count: num of chars
 * Return:num of chars printed
 */
int printf_unsigned(unsigned int num, int count)
{
	char buf[21];
	int pos = 0;

	do {
		buf[pos++] = '0' + (num % 10);
		num /= 10;
	}
	while (num != 0)
	while (pos > 0)
	{
		putchar(buf[--pos]);
		count++;
	}
	return (count);
}
