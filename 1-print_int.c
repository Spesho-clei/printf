#include "main.h"
/**
 * print_int - handle d, i format specifiers
 *
 * @args: arguments
 * @buf: buffer array
 * @flags: calculate active flags
 * @width: get width
 * @precision: precision specification
 * @size: size specifier
 * Return: number of chars
 */
int print_int(va_list args, char buf[], int flags,
		int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(args, long int);
	unsigned long int num;

	n = convert_size_number(n, size);
	if (n == 0)
		buf[i--] = '0';
	buf[BUFF_SIZE - 1] = '\0';
	num = (unsigned long int)n;
	if (n < 0)
	{
		num = (unsigned long int)((-1) * n);
		is_negative = 1;
	}
	while (num > 0)
	{
		buf[i--] = (num % 10) + '0';
		num /= 10;
	}
	i++;
	return (write_number(is_negative, i, buf, flags, width, precision, size));
}

