#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
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
{
	char *conv_spec;
	int (*f)(va_list, char *);
} print_t;

int (*switch_funct(const char *s, int *pos))(va_list, char *);
int print_char(va_list args, char *buffer);
int print_str(va_list args, char *buffer);
int print_int(va_list args, char *buffer);
int print_unint(va_list args, char *buffer);
int _printf(const char *format, ...);
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

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
#endif
