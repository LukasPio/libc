#include "string.h"
#include <stdio.h>

int main(void)
{
    char dst[] = "Hello";
    char src[] = ", world!";

    strcat(dst, src);

    printf("Final string : %s\n", dst);

    return 0;
}