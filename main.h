#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
<<<<<<< HEAD
 * struct print - struct for print function
 * @conv_spec: conversion specifier.
 * @f: pointer to the printer function
 * Return: none
 */

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define BUFFER_SIZE 1024
#define UNUSED(x) (void)(x)
typedef struct print
=======
* struct convert - defines a structure for symbols and functions
*
* @sym: The operator
* @f: The function associated
*/
struct convert
>>>>>>> 6c5262d7b0b883fac7097a54f1fa9998661a405e
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;


int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
<<<<<<< HEAD
int _print_buf(char *buf, int n);
int print_bin(va_list args, char *buffer);
int print_pointer(va_list, char *buffer);
int print_low_hex(va_list, char *buffer);
int print_upp_hex(va_list, char *buffer);
int print_octal(va_list, char *buffer);
int custom_str(va_list, char *buffer);
int print_octal_zero(va_list args, char *buffer);
int print_space_int(va_list args, char *buffer);
int print_plus_int(va_list args, char *buffer);
int print_rot13string(va_list types, char buffer[],
        int flags, int width, int precision, int size);
int print_zero_int(va_list args, char *buffer);
/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);
=======
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);

unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);
>>>>>>> 6c5262d7b0b883fac7097a54f1fa9998661a405e

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
#endif
