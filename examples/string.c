#include <stdio.h>
#include "string.h"

int main(void)
{
    printf("========== strlen ==========\n");
    printf("strlen(\"Hello\") = %zu\n", strlen("Hello"));
    printf("strlen(\"\") = %zu\n\n", strlen(""));

    printf("========== strnlen ==========\n");
    printf("strnlen(\"Hello\", 10) = %zu\n", strnlen("Hello", 10));
    printf("strnlen(\"Hello\", 3) = %zu\n\n", strnlen("Hello", 3));

    printf("========== strcmp ==========\n");
    printf("strcmp(\"abc\", \"abc\") = %d\n", strcmp("abc", "abc"));
    printf("strcmp(\"abc\", \"abd\") = %d\n", strcmp("abc", "abd"));
    printf("strcmp(\"abd\", \"abc\") = %d\n\n", strcmp("abd", "abc"));

    printf("========== strncmp ==========\n");
    printf("strncmp(\"abcdef\", \"abcxyz\", 3) = %d\n",
           strncmp("abcdef", "abcxyz", 3));
    printf("strncmp(\"abcdef\", \"abcxyz\", 4) = %d\n\n",
           strncmp("abcdef", "abcxyz", 4));

    printf("========== strcpy ==========\n");
    char copy[32];
    strcpy(copy, "Hello World");
    printf("copy = \"%s\"\n\n", copy);

    printf("========== strncpy ==========\n");
    char limited[10];

    strncpy(limited, "Hi", sizeof(limited));
    printf("Copy short string: \"%s\"\n", limited);

    strncpy(limited, "ABCDEFGHIJKLMN", 5);
    limited[5] = '\0';
    printf("Copy first 5 chars: \"%s\"\n\n", limited);

    printf("========== strcat ==========\n");
    char sentence[64] = "Hello";
    strcat(sentence, ", ");
    strcat(sentence, "World!");
    printf("%s\n\n", sentence);

    printf("========== strchr ==========\n");
    const char *text = "banana";

    char *first = strchr(text, 'a');
    if (first)
        printf("First 'a': %s\n", first);

    if (strchr(text, 'z') == NULL)
        printf("'z' not found\n");

    printf("\n");

    printf("========== strrchr ==========\n");

    char *last = strrchr(text, 'a');
    if (last)
        printf("Last 'a': %s\n", last);

    printf("\n");

    printf("========== strstr ==========\n");
    char *sub = strstr("The quick brown fox", "brown");

    if (sub)
        printf("Substring: %s\n", sub);

    if (strstr("Hello", "world") == NULL)
        printf("Substring not found\n");

    printf("\n");

    printf("========== strspn ==========\n");
    printf("strspn(\"123abc\", \"0123456789\") = %zu\n",
           strspn("123abc", "0123456789"));

    printf("strspn(\"abc123\", \"0123456789\") = %zu\n\n",
           strspn("abc123", "0123456789"));

    printf("========== strcspn ==========\n");
    printf("strcspn(\"hello,world\", \",\") = %zu\n",
           strcspn("hello,world", ","));

    printf("strcspn(\"abcdef\", \"xyz\") = %zu\n\n",
           strcspn("abcdef", "xyz"));

    printf("========== strtok ==========\n");

    char tokens[] = "apple,banana,,orange;grape";
    char *token = strtok(tokens, ",;");

    while (token != NULL)
    {
        printf("Token: \"%s\"\n", token);
        token = strtok(NULL, ",;");
    }

    printf("\n");

    printf("========== memcpy ==========\n");

    char src1[] = "Hello";
    char dst1[16];

    memcpy(dst1, src1, strlen(src1) + 1);

    printf("Copied: %s\n\n", dst1);

    printf("========== memmove ==========\n");

    char overlap[] = "123456789";

    printf("Before : %s\n", overlap);

    memmove(overlap + 2, overlap, 5);

    printf("After  : %s\n\n", overlap);

    printf("========== memset ==========\n");

    char buffer[11];

    memset(buffer, '*', 10);
    buffer[10] = '\0';

    printf("%s\n\n", buffer);

    printf("========== memcmp ==========\n");

    char a[] = "abcdef";
    char b[] = "abcdef";
    char c[] = "abcxef";

    printf("memcmp(a, b, 6) = %d\n", memcmp(a, b, 6));
    printf("memcmp(a, c, 6) = %d\n\n", memcmp(a, c, 6));

    printf("========== memchr ==========\n");

    unsigned char bytes[] = {10, 20, 30, 40, 50};

    unsigned char *found = memchr(bytes, 30, sizeof(bytes));

    if (found)
        printf("Found value %d at index %ld\n",
               *found,
               (long)(found - bytes));

    if (memchr(bytes, 99, sizeof(bytes)) == NULL)
        printf("99 not found\n");

    return 0;
}