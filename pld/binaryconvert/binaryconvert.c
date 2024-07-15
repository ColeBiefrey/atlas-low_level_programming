#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_binary - prints binary representation of unsigned int
 * @n: unsigned integer for conversion
 */

void print_binary(unsigned int n)
{
    if (n > 1)
        print_binary(n >> 1);
    putchar((n & 1) + '0');
}

/**
 * _printf - custom printf
 * @format: format string
 * @...: additional args
 * Return: num of chars printed
 */

int _printf(const char *format, ...)
{
    {
        va_list args;
        int printed_chars = 0;
        const char* ptr;

        va_start(args, format);
        for (ptr = format; *ptr != '\0'; ptr++)
        {
            if (*ptr == '%')
            {
                ptr++;
                if (*ptr == 'b')
                {
                    unsigned int num = va_arg(args, unsigned int);
                    print_binary(num);
                    printed_chars += count_digits(num, 2);
                }
                else
                {
                    putchar('%');
                    putchar(*ptr);
                    printed_chars += 2;
                }
            }
            else
            {
                putchar(*ptr);
                printed_chars++;
            }
        }
        va_end(args);

        return printed_chars;
    }
}

/**
* count_digits - counts num of digits in given base
* @num: the num to count digits for
* @base: the base
* Return: num of digits
*/

int count_digits(unsigned int num, int base)
{
    int count = 0;
    while (num > 0)
    {
        num /= base;
        count++;
    }
        return count;
}
