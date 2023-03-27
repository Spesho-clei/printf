#include "main.h"
/**
 * print_h_int - prints signed short integer
 *
 * @args: argument of short int type
 * @buffer: pointer of 1-byte size
 *
 * Return: number of bytes printed
 */
int print_h_hex(va_list args, char *buffer);
int print_h_octal(va_list args, char *buffer);

int print_h_int(va_list args, char *buffer)
{
	short int num;
	int i = 0, j = 0;
	unsigned short int pos_num, b, digit_num = 1;
	char sign = '+';

	num = (short int)va_arg(args, int);

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

/**
 * print_h_octal - prints unsigned short integer as octal
 *
 * @args: argument of unsigned short int type
 * @buffer: pointer of 1-byte size
 *
 * Return: number of bytes printed
 */
int print_h_octal(va_list args, char *buffer)
{
	unsigned short int num, b;
	int i = 0, j = 0;
	char octal[100];

	num = (unsigned short int)va_arg(args, int);

	if (num == 0)
	{
		buffer[i++] = '0';
	}
	else
	{
		while (num != 0)
		{
			b = num % 8;
			octal[i++] = b + '0';
			num /= 8;
		}

		i--;

		while (i >= 0)
		{
			buffer[j++] = octal[i--];
		}
	}

	while (j < BUFFER_SIZE)
	{
		buffer[j++] = '\0';
	}

	return (j);
}

/**
 * print_h_hex - prints hexadecimal (lowercase) with h flag
 *
 * @args: argument of unsigned short type
 * @buffer: pointer of 1-byte size
 *
 * Return: number of bytes printed
 */
int print_h_hex(va_list args, char *buffer)
{
	unsigned short num;
	int i = 0, j, rem;
	char hex[100];

	num = (unsigned short) va_arg(args, unsigned int);

	if (num == 0)
	{
		buffer[i++] = '0';
	}

	while (num != 0)
	{
		rem = num % 16;
		if (rem < 10)
			hex[i++] = 48 + rem;
		else
			hex[i++] = 87 + rem;
		num /= 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		buffer[i - j - 1] = hex[j];
	}

	return (_print_buf(buffer, i));
}

