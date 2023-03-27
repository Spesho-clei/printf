#include "main.h"
/**
 * print_upp_hex - prints unsigned integer number
 * upper  hexadecimal value
 * @args: argument of integer type
 * @buffer: pointer of 1byte size
 * Return: number of bytes printed
 */
int print_upp_hex(va_list args, char *buffer)
{
	unsigned int num;
	unsigned int pos_num, b, digit_num = 1, i = 0;
	char let;

	num = va_arg(args, unsigned int);
	pos_num = num;
	buffer[i] = '0', i++;
	if (num == 0)
		return (_print_buf(buffer, i));
	buffer[i] = 'x', i++;
	b = pos_num;
	while (b > 15)
	{
		b /= 16;
		digit_num *= 16;
	}
	for (; digit_num > 0; digit_num /= 16)
	{
		b = (pos_num / digit_num);
		let = (b + '0');
		if (b > 9)
			let = ((b + 7) + '0');
		buffer[i] = let, i++, pos_num %= digit_num;
	}
	return (_print_buf(buffer, i));
}