0x11 C-printf project 
Group project

0. Write a function that produces output according to a format.

Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
1. Handle the following conversion specifiers:

d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
2. Handle the following custom conversion specifiers:

b: the unsigned int argument is converted to binary
3. Handle the following conversion specifiers:

u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
4. Use a local buffer of 1024 chars in order to call write as little as possible
5. Handle the following custom conversion specifier:

S : prints the string.
Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
6. Handle the following conversion specifier: p.

You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
7. Handle the following flag characters for non-custom conversion specifiers:

+
space
#
8. Handle the following length modifiers for non-custom conversion specifiers:

l
h
Conversion specifiers to handle: d, i, u, o, x, X
9. Handle the field width for non-custom conversion specifiers
10. Handle the precision for non-custom conversion specifiers
11. Handle the 0 flag character for non-custom conversion specifiers
12. Handle the - flag character for non-custom conversion specifiers
13. Handle the following custom conversion specifier:

r : prints the reversed string
14. Handle the following custom conversion specifier:

R: prints the rot13'ed string
15. All the above options work well together

Printf Project

The printf function is a popular function in the C programming language that is used for printing formatted output. In this group project, we have implemented our own version of printf that mimics the actual C printf function, including all format identifiers.

Project Overview

Our printf implementation supports a wide range of format specifiers, including:

%c for printing characters
%s for printing strings
%d and %i for printing integers in decimal notation
%u for printing unsigned integers in decimal notation
%o for printing integers in octal notation
%x and %X for printing integers in hexadecimal notation
%f for printing floating-point numbers
%e and %E for printing floating-point numbers in scientific notation
%g and %G for printing floating-point numbers in either decimal or scientific notation, depending on the size of the number and the precision specified
In addition to format specifiers, our printf implementation also supports several flags that can be used to modify the output format, including:

- for left-justifying the output
0 for padding the output with zeroes instead of spaces
+ for always including a sign (+ or -) in the output
(space) for including a space before positive numbers
# for including extra prefixes for certain conversions (e.g. 0x for %x)
Our implementation also includes support for variable argument lists using the va_list data type and related macros from <stdarg.h>.

Usage
To use our printf implementation, include the printf.h header file in your C program and call the my_printf function with the desired format string and any additional arguments. Here's an example:

C - code
#include <stdio.h>
#include "printf.h"

int main() {
    my_printf("Hello, %s! The answer is %d.\n", "world", 42);
    return 0;
}
This will output:

Hello, world! The answer is 42.

Contributors

This project was created by Dickens Owino and Nancy Jepkoech. We welcome suggestions and contributions from other developers interested in enhancing our printf implementation.

We hope you find our implementation helpful!
