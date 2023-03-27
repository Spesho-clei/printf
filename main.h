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

int get_flags(const char *format, int *i);
/****** precision***/
int get_precision(const char *format, int *i, va_list list);
/*** handlers ****/
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);
/**** get size ******/
int get_size(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
/* Function to print non printable characters */
int print_non_printable(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Funciotns to handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*Function to print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Function to print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);
#endif
