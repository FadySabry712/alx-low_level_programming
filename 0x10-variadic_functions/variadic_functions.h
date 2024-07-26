#ifndef VARIADIC_H
#define VARIADIC_H

#include <stdarg.h>
#include <stdio.h>

/**
 * sruct token - entery
 * @token: param 1
 * @f: param 2
 */
typedef struct token
{
	char *token;
	void (*f)(char *, va_list);
} token_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
