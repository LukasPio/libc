#ifndef STRING_H
#define STRING_H

#include <stddef.h>

/* String length */

size_t strlen(const char *s);
size_t strnlen(const char *s, size_t maxlen);

/* String comparison */

int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);

/* String copy */

char *strcpy(char *restrict dst, const char *restrict src);
char *strncpy(char *dst, const char *restrict src, size_t dsize);

/* String concatenation */

char *strcat(char *restrict dst, const char *restrict src);

/* String search */

char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
char *strstr(const char *haystack, const char *needle);

/* String span */

size_t strspn(const char *s, const char *accept);
size_t strcspn(const char *s, const char *reject);

/* String tokenization */

char *strtok(char *restrict str, const char *restrict delim);

/* Memory copy */

void *memcpy(void *restrict dst, const void *restrict src, size_t n);
void *memmove(void *dst, const void *src, size_t n);

/* Memory manipulation */

void *memset(void *s, int c, size_t n);

/* Memory comparison */

int memcmp(const void *s1, const void *s2, size_t n);

/* Memory search */

void *memchr(const void *s, int c, size_t n);

#endif