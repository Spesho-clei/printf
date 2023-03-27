#include "main.h"
/**
 * print_pointer - prints the address of pointer
 * @args: the arguments
 * @buffer: memory space
 * Return: number of printed bytes
 */
int print_pointer(va_list args, char *buffer)
{
	unsigned long int addr, a, b = 1;
	unsigned int i = 0;
	char let;

	addr = va_arg(args, unsigned long int);
	if (addr == 0)
	{
		buffer[i] = '0', i++;
		return (_print_buf(buffer, i));
	}
	if (!addr)
	{
		buffer = "(nil)";
		return (_print_buf(buffer, 5));
	}
	a = addr;
	buffer[i] = '0', i++, buffer[i] = 'x', i++;
	while (a > 15)
	{
		b *= 16;
		a /= 16;
	}
	for (; b > 0; b /= 16)
	{
		a = (addr / b);
		if (a < 9)
			let = (a + '0');
		else
			let = ((a + 39) + '0');
		buffer[i] = let, i++, addr %= b;
	}
	return (_print_buf(buffer, i));
}
