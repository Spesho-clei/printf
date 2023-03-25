#include "main.h"
/**
 * print_pointer_address - function to print p specifier
 * @format: constant parameter
 * Return: nothing
 */
void print_pointer_address(const char *format, ...)
{
	void *ptr;
	va_list args;

	va_start(args, format);
	ptr = va_arg(args, void *);
	printf("%p\n", ptr);
	va_end(args);
}
