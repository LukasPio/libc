#include "string.h"
#include <stdio.h>

int main()
{

    char *s = "Testing strlen :)";

    size_t stringLength = strlen(s);
    printf("Size of received string: %zu\n", stringLength);

    return 0;
}