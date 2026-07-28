#include "string.h"
#include <stdio.h>

int main(void) {
    /* Equal */
    // const char *s1 = "webshell";
    // const char *s2 = "webshell";

    /* Greater */
    // const char *s1 = "webshell";
    // const char *s2 = "portscanner";

    /* Less */
    // const char *s1 = "apple";
    // const char *s2 = "banana";

    /* Greater (difference in the middle) */
    // const char *s1 = "webshell";
    // const char *s2 = "webserver";

    /* Less (prefix) */
    // const char *s1 = "abc";
    // const char *s2 = "abcdef";

    /* Greater (prefix) */
    const char *s1 = "abcdef";
    const char *s2 = "abc";

    int result = strcmp(s1, s2);

    if (result == 0) {
        printf("%s is equal to %s\n", s1, s2);
    } else if (result > 0) {
        printf("%s is greater than %s\n", s1, s2);
    } else {
        printf("%s is greater than %s\n", s2, s1);
    }

    return 0;
}