#include "string.h"

size_t strlen(const char *s)
{
    size_t len = 0;

    while (*s++ != '\0')
        len++;

    return len;
}

size_t strnlen(const char *s, size_t maxlen)
{

    size_t i;

    for (i = 0; i < maxlen; i++)
    {
        if (s[i] == '\0')
            break;
    }

    return i;
}