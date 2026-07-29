#include <stdio.h>
#include "string.h"

int main(void)
{
    printf("1. %d\n", strncmp("hello", "hello", 5));
    printf("2. %d\n", strncmp("hello", "help", 3));
    printf("3. %d\n", strncmp("hello", "help", 4));
    printf("4. %d\n", strncmp("abc", "xyz", 0));

    return 0;
}