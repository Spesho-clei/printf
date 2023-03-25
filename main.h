#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
int _printf(const char *format, ...);
void write_buffer(const char *message);
void printf_hex(unsigned int num, int count, int uppercase_flag);
int printf_octal(unsigned int num, int count);
int print_string(va_list args, int count);
int printf_unsigned(unsigned int num, int count);
void write_buffer(const char *message);
int printf_pointer(va_list args, int count);
void print_binary(unsigned int num);
int custom_printf(const char *format, ...);
#endif
