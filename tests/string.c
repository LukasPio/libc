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

    /* strcpy */

    {
        char dst[32];

        assert(strcpy(dst, "") == dst);
        assert(strcmp(dst, "") == 0);

        assert(strcpy(dst, "hello") == dst);
        assert(strcmp(dst, "hello") == 0);

        assert(strcpy(dst, "webshell") == dst);
        assert(strcmp(dst, "webshell") == 0);
    }

    /* strncpy */

    {
        char dst[8];

        assert(strncpy(dst, "", sizeof(dst)) == dst);
        assert(strcmp(dst, "") == 0);

        strncpy(dst, "abc", sizeof(dst));
        assert(strcmp(dst, "abc") == 0);
        assert(dst[3] == '\0');
        assert(dst[4] == '\0');
        assert(dst[5] == '\0');
        assert(dst[6] == '\0');
        assert(dst[7] == '\0');

        strncpy(dst, "abcdef", 3);
        assert(dst[0] == 'a');
        assert(dst[1] == 'b');
        assert(dst[2] == 'c');

        /* strncpy() não adiciona '\0' se truncar */
        char dst2[3] = {'X', 'X', 'X'};
        strncpy(dst2, "abcdef", sizeof(dst2));
        assert(dst2[0] == 'a');
        assert(dst2[1] == 'b');
        assert(dst2[2] == 'c');

        char dst3[5];
        strncpy(dst3, "ab", sizeof(dst3));
        assert(dst3[0] == 'a');
        assert(dst3[1] == 'b');
        assert(dst3[2] == '\0');
        assert(dst3[3] == '\0');
        assert(dst3[4] == '\0');
    }

    puts("All tests passed.");

    return 0;
}