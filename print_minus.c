#include "main.h"
/**
 * print_minus_int - prints signed integer with - flag
 *
 * @args: argument of integer type
 * @buffer: pointer of 1-byte size
 *
 * Return: number of bytes printed
 */
int print_minus_int(va_list args, char *buffer)
{
	int num, i = 0, j;
	unsigned int pos_num, b, digit_num = 1;
	char sign = '+';

	num = va_arg(args, int);

	if (num < 0)
	{
		buffer[i++] = '-';
		pos_num = num * -1;
		sign = '-';
	}
	else
	{
		pos_num = num;
	}

	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (pos_num != 0)
		{
			pos_num /= 10;
			digit_num *= 10;
		}

		digit_num /= 10;

		while (digit_num != 0)
		{
			b = num / digit_num;
			buffer[i++] = b + '0';
			num -= b * digit_num;
			digit_num /= 10;
		}
	}

	if (sign == '-')
		j = 1;
	else
		j = 0;

	while (j < i)
	{
		_print_char(buffer[j++]);
	}

	while (j < BUFFER_SIZE)
	{
		buffer[j++] = '\0';
	}

	return (i);
}
