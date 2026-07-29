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

int strcmp(const char *s1, const char *s2)
{
    while (*s1 == *s2 && *s1 != '\0')
    {
        s1++;
        s2++;
    }

    return (unsigned char)*s1 - (unsigned char)*s2;
}

char *strcpy(char *dst, const char *restrict src)
{
    char *start = dst;

    while (*src != '\0')
    {
        *dst++ = *src++;
    }

    *dst = '\0';

    return start;
}

char *strncpy(char *dst, const char *restrict src, size_t dsize)
{
    char *start = dst;
    size_t i = 0;

    while (i < dsize && *src != '\0')
    {
        *dst++ = *src++;
        i++;
    }

    while (i < dsize)
    {
        *dst++ = '\0';
        i++;
    }

    return start;
}

char *strcat(char *restrict dst, const char *restrict src)
{
    strcpy(dst + strlen(dst), src);
    return dst;
}

char *strchr(const char *s, int c)
{
    while ((unsigned char)*s != (unsigned char)c)
    {
        if (*s == '\0')
            return NULL;
        s++;
    }
    return (char *)s;
}

char *strrchr(const char *s, int c) {
    char *last = NULL;

    while(*s != '\0') 
    {
        if ((unsigned char)*s == (unsigned char)c) last = (char *)s;
        s++;
    }

    if ((unsigned char)c == '\0') return (char *) s;

    return last;
}