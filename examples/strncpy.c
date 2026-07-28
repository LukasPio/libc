#include "string.h"
#include <stdio.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dst[64];

    strncpy(dst, src, 5);

    printf("Source      : %s\n", src);
    printf("Destination : %s\n", dst);

    return 0;
}