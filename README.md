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

