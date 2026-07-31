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

int strncmp(const char *s1, const char *s2, size_t n)
{

    while (*s1 == *s2 && *s1 != '\0' && n > 0)
    {
        s1++;
        s2++;
        n--;
    }

    if (n == 0)
        return 0;

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

char *strrchr(const char *s, int c)
{
    char *last = NULL;

    while (*s != '\0')
    {
        if ((unsigned char)*s == (unsigned char)c)
            last = (char *)s;
        s++;
    }

    if ((unsigned char)c == '\0')
        return (char *)s;

    return last;
}

char *strstr(const char *haystack, const char *needle)
{
    if (*needle == '\0')
        return (char *)haystack;

    const char *start = strchr(haystack, *needle);
    size_t sublen = strlen(needle);

    while (start != NULL)
    {
        if (strncmp(start, needle, sublen) == 0)
            return (char *)start;
        start = strchr(start + 1, *needle);
    }

    return NULL;
}

size_t strspn(const char *s, const char *accept)
{
    if ((unsigned char)*s == '\0')
        return 0;
    size_t i = 0;
    size_t len = strlen(accept);
    int invalid;
    while ((unsigned char)*s != '\0')
    {
        invalid = 1;
        for (size_t j = 0; j < len; j++)
        {
            if ((unsigned char)*s == (unsigned char)accept[j])
            {
                invalid = 0;
                i++;
                break;
            }
        }
        if (invalid)
            break;
        s++;
    }
    return i;
}

size_t strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t len = strlen(reject);
    int invalid;
    while ((unsigned char)*s != '\0')
    {
        invalid = 0;
        for (size_t j = 0; j < len; j++)
        {
            if ((unsigned char)*s == (unsigned char)reject[j])
            {
                invalid = 1;
                break;
            }
        }
        if (invalid)
            break;
        i++;
        s++;
    }

    return i;
}

char *strtok(char *restrict str, const char *restrict delim)
{
    static char *last;

    if (str != NULL)
        last = str;

    if (last == NULL)
        return NULL;

    last += strspn(last, delim);

    if (*last == '\0')
    {
        last = NULL;
        return NULL;
    };

    char *token = last;

    last += strcspn(last, delim);

    if (*last == '\0')
    {
        last = NULL;
    }
    else
    {
        *last = '\0';
        last++;
    }

    return token;
}

void *memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned char *d = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;
    while (n--)
    {
        *d = *s;
        d++;
        s++;
    }
    return dst;
}

void *memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
    if (dest < src)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        d += n;
        s += n;

        while (n--)
            *--d = *--s;
    }

    return dest;
}

void *memset(void *s, int c, size_t n)
{
    unsigned char *current = s;
    unsigned char value = (unsigned char)c;
    while (n--)
    {
        *current = value;
        current++;
    }
    return s;
}

int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *current1 = s1;
    const unsigned char *current2 = s2;

    while (n--)
    {
        if (*current1 != *current2)
            return *current1 - *current2;
        current1++;
        current2++;
    }

    return 0;
}

void *memchr(const void *s, int c, size_t n)
{
    const unsigned char *current = s;

    while (n--)
    {
        if (*current == (unsigned char)c) return (void *)current;
        current++;
    }

    return NULL;
}