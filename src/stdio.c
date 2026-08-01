#include <mystdio.h>

#define EOF -1

int putchar(int c) 
{
    unsigned char val = (unsigned char) c;
    
    if (write(STDOUT_FILENO, &val, 1) == -1) return EOF;

    return val;
}