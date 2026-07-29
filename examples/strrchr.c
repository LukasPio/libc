#include "string.h"
#include <stdio.h>

int main()
{
    char *s = "Random";

    char *c1 = strrchr(s, 'o');
    char *c2 = strrchr(s, 'd');
    char *c3 = strrchr(s, '\0');

    if (c1 == NULL)
        printf("c1: NULL\n");
    else
        printf("c1: '%c' at index %td\n", *c1, c1 - s);

    if (c2 == NULL)
        printf("c2: NULL\n");
    else
        printf("c2: '%c' at index %td\n", *c2, c2 - s);

    if (c3 == NULL)
        printf("c3: NULL\n");
    else
        printf("c3: points to the null terminator at index %td\n", c3 - s);
}