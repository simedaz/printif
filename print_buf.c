#include "main.h"

/**
 * print_buf - prints buffer
 * @buf: buffer pointer
 * @nbuf: number of the  bytes to print
 * Return: number of the bytes printed.
 */

int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
