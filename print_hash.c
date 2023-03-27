#include "main.h"

/**
 * print_hash_int - prints signed integer with # flag
 *
 * @args: argument of integer type
 * @buffer: pointer of 1-byte size
 *
 * Return: number of bytes printed
 */
int print_hash_int(va_list args, char *buffer)
{
	int num = va_arg(args, int);
	unsigned int pos_num;
	unsigned int digit_num = 1;
	unsigned int b;
	char hash = '#';
	int i = 0;

	if (num < 0)
		buffer[i++] = '-',
		pos_num = -num;
	else
		pos_num = num;

	if (num == 0)
		buffer[i++] = '0';
	else
	{
		while (pos_num / digit_num > 9)
			digit_num *= 10;

		do {
			b = pos_num / digit_num;
			buffer[i++] = b + '0';
			pos_num -= b * digit_num;
			digit_num /= 10;
		} while (digit_num);

		if (num > 0)
			buffer[i++] = hash;
	}

	return (_print_buf(buffer, i));
}
