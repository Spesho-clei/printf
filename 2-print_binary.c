#include "main.h"
#include <limits.h>
/**
 * rev_binary - fills the array from right to left
 * with the binary value of the number
 * @bin: array of memory
 * @size: size of binary memory in byte or positive
 * @q: the number in decimal value and positive
 * Return: array of binary number
 */
char *rev_binary(char *bin, unsigned int q, int size)
{
	int i;

	for (i = 0; i < size; i++)
		bin[i] = '0';
	bin[i] = '\0';
	for (i = size - 1; q > 1; i--)
	{
		if (q % 2 != 0)
			bin[i] = '1';
		q /= 2;
	}
	if (q != 0)
		bin[i] = '1';
	return (bin);
}
/**
 * print_bin - prints unsigned int in binary format
 * @args: arguments
 * @buffer: the pointer
 * Return: number of printed int
 */
int print_bin(va_list args, char *buffer)
{
	int num;
	unsigned int q, a;
	int size = 0;
	char *bin;

	num = va_arg(args, int);
	if (num == 0)
	{
		buffer[0] = '0';
		_print_buf(buffer, 1);
		return (1);
	}
	else
		q = num;
	a = q;
	while (a > 0)
	{
		a /= 2;
		size++;
	}
	bin = malloc(sizeof(char) * (size + 1));
	if (bin == NULL)
		return (-1);
	rev_binary(bin, q, size);
	_print_buf(bin, size);
	free(bin);
	return (size);
}
