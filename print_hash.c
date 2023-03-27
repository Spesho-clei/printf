#include "main.h"
/**
 * print_hash_int - prints an integer with the hash flag
 * @args: argument of integer type
 * @buffer: pointer to buffer
 *
 * Return: number of bytes printed
 */

int print_unint_helper(unsigned int num, unsigned int base,
		       char *digits, char *buffer, int index);

int print_hash_int(va_list args, char *buffer)
{
	int num = va_arg(args, int);
	unsigned int pos_num;
	char let;
	int i = 0, j = 0;

	if (num < 0)
	{
	let = '-';
	buffer[i] = let;
	pos_num = num * -1;
	i++;
	j++;
	}
	else
	pos_num = num;

	if (pos_num != 0)
	{
	let = '0';
	buffer[i] = let;
	i++;
	j++;
	let = 'x';
	buffer[i] = let;
	i++;
	j++;
	}

	return (print_unint_helper(pos_num, 16, "0123456789abcdef", buffer, i) + j);
}
