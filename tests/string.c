#include "string.h"
#include <assert.h>
#include <stdio.h>

int main(void)
{
    /* strlen */

    assert(strlen("") == 0);
    assert(strlen("a") == 1);
    assert(strlen("hello") == 5);
    assert(strlen("webshell") == 8);
    assert(strlen("portscanner") == 11);

    /* strnlen */

    assert(strnlen("", 10) == 0);
    assert(strnlen("hello", 10) == 5);
    assert(strnlen("hello", 5) == 5);
    assert(strnlen("hello", 4) == 4);
    assert(strnlen("abcdef", 3) == 3);
    assert(strnlen("abcdef", 0) == 0);

    /* strcmp */

    assert(strcmp("", "") == 0);
    assert(strcmp("hello", "hello") == 0);

    assert(strcmp("apple", "banana") < 0);
    assert(strcmp("banana", "apple") > 0);

    assert(strcmp("abc", "abcdef") < 0);
    assert(strcmp("abcdef", "abc") > 0);

    assert(strcmp("webshell", "webserver") > 0);
    assert(strcmp("webserver", "webshell") < 0);

    assert(strcmp("A", "a") < 0);
    assert(strcmp("z", "a") > 0);

    puts("All tests passed.");

    return 0;
}