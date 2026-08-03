#include <mystdio.h>

#define EOF -1

int putchar(int c)
{
    unsigned char val = (unsigned char)c;

    if (write(STDOUT_FILENO, &val, 1) == -1)
        return EOF;

    return val;
}

int puts(const char *s)
{
    const char *current = s;
    int size = 0;

    while (*current != '\0')
    {
        current++;
        size++;
    }
    current = s;
    char buffer[size + 1];

    for (int i = 0; i < *current; i++)
    {
        buffer[i] = *current;
        current++;
    }
    buffer[size] = '\n';

    write(STDOUT_FILENO, buffer, size + 1);

    return 0;
}