#include "string.h"
#include <stdio.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dst[64];

    strcpy(dst, src);

    printf("Source      : %s\n", src);
    printf("Destination : %s\n", dst);

    return 0;
}