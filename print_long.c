#include "main.h"
/**
 * print_space_long - prints unsigned long integer with space flag
 *
 * @args: argument of unsigned long integer type
 * @buffer: pointer of 1-byte size
 *
 * Return: number of bytes printed
 */
int print_minus_long(va_list args, char *buffer);

int print_space_long(va_list args, char *buffer)
{
	unsigned long num = va_arg(args, unsigned long);
	unsigned long pos_num = num;
	unsigned int i = 0, j = 0, digit_num = 1;
	char space = ' ', sign = ' ';

	while (pos_num != 0)
	{
		pos_num /= 10;
		digit_num *= 10;
	}

	digit_num /= 10;

	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (digit_num != 0)
		{
			unsigned int b = num / digit_num;
			buffer[i++] = b + '0';
			num -= b * digit_num;
			digit_num /= 10;
		}
	}

	if (num != 0)
	{
		while (j < i)
		{
			buffer[j++] = space;
		}
	}
	else
	{
		sign = '+';
	}

	buffer[j] = sign;

	return (_print_buf(buffer, i + 1));
}

/**
 * print_minus_long - prints signed long integer with - flag
 *
 * @args: argument of signed long integer type
 * @buffer: pointer of 1-byte size
 *
 * Return: number of bytes printed
 */
int print_minus_long(va_list args, char *buffer)
{
	long num = va_arg(args, long);
	unsigned long pos_num;
	unsigned int i = 0, j;
	char sign = '+';

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
		unsigned long digit_num = 1;

		while (pos_num != 0)
		{
			pos_num /= 10;
			digit_num *= 10;
		}

		digit_num /= 10;

		while (digit_num != 0)
		{
			unsigned int b = num / digit_num;
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
