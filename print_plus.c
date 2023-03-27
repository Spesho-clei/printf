#include "main.h"

/**
 * print_plus_int - prints signed integer number with plus sign for positive numbers
 *
 * @args: argument of integer type
 * @buffer: pointer to buffer to store printed characters
 *
 * Return: number of bytes printed
 */
int print_plus_int(va_list args, char *buffer)
{
	int num;
	unsigned int pos_num, b, digit_num = 1, i = 0;
	char let;

	num = va_arg(args, int);

	if (num < 0)
	{
		let = 45;
		buffer[i] = let;
		pos_num = num * -1;
		i++;
	}
	else
	{
		let = 43;
		buffer[i] = let;
		pos_num = num;
		i++;
	}

	b = pos_num;

	while (b > 9)
	{
		b /= 10;
		digit_num *= 10;
	}

	for (; digit_num > 0; digit_num /= 10)
	{
		let = ((pos_num / digit_num) + 48);
		buffer[i] = let;
		i++;
		pos_num %= digit_num;
	}
	return (_print_buf(buffer, i));
}
