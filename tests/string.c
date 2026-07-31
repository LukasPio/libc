#include <assert.h>
#include <stddef.h>
#include <string.h>

int main(void)
{
    /* ===================== strlen ===================== */

    assert(strlen("") == 0);
    assert(strlen("a") == 1);
    assert(strlen("hello") == 5);

    /* ===================== strnlen ===================== */

    assert(strnlen("", 5) == 0);
    assert(strnlen("hello", 10) == 5);
    assert(strnlen("hello", 3) == 3);
    assert(strnlen("hello", 5) == 5);

    /* ===================== strcmp ===================== */

    assert(strcmp("abc", "abc") == 0);
    assert(strcmp("abc", "abd") < 0);
    assert(strcmp("abd", "abc") > 0);
    assert(strcmp("", "") == 0);
    assert(strcmp("", "a") < 0);
    assert(strcmp("a", "") > 0);

    /* ===================== strncmp ===================== */

    assert(strncmp("abcdef", "abcxyz", 3) == 0);
    assert(strncmp("abc", "abd", 3) < 0);
    assert(strncmp("abd", "abc", 3) > 0);
    assert(strncmp("abc", "xyz", 0) == 0);

    /* ===================== strcpy ===================== */

    {
        char dst[16];
        assert(strcpy(dst, "hello") == dst);
        assert(strcmp(dst, "hello") == 0);
    }

    /* ===================== strncpy ===================== */

    {
        char dst[10];

        strncpy(dst, "abc", sizeof(dst));
        assert(strcmp(dst, "abc") == 0);

        strncpy(dst, "abcdef", 3);
        assert(dst[0] == 'a');
        assert(dst[1] == 'b');
        assert(dst[2] == 'c');
    }

    /* ===================== strcat ===================== */

    {
        char dst[32] = "hello";
        assert(strcat(dst, " world") == dst);
        assert(strcmp(dst, "hello world") == 0);
    }

    /* ===================== strchr ===================== */

    {
        char s[] = "banana";

        assert(strchr(s, 'b') == &s[0]);
        assert(strchr(s, 'a') == &s[1]);
        assert(strchr(s, 'x') == NULL);
        assert(strchr(s, '\0') == &s[6]);
    }

    /* ===================== strrchr ===================== */

    {
        char s[] = "banana";

        assert(strrchr(s, 'a') == &s[5]);
        assert(strrchr(s, 'b') == &s[0]);
        assert(strrchr(s, 'x') == NULL);
        assert(strrchr(s, '\0') == &s[6]);
    }

    /* ===================== strstr ===================== */

    {
        char s[] = "hello world";

        assert(strstr(s, "hello") == s);
        assert(strstr(s, "world") == s + 6);
        assert(strstr(s, "lo wo") == s + 3);
        assert(strstr(s, "") == s);
        assert(strstr(s, "abc") == NULL);
    }

    /* ===================== strspn ===================== */

    assert(strspn("abcde", "abc") == 3);
    assert(strspn("aaaaab", "a") == 5);
    assert(strspn("xyz", "abc") == 0);
    assert(strspn("", "abc") == 0);

    /* ===================== strcspn ===================== */

    assert(strcspn("abcde", "d") == 3);
    assert(strcspn("abcdef", "xyz") == 6);
    assert(strcspn("banana", "an") == 1);
    assert(strcspn("", "abc") == 0);

    /* ===================== strtok ===================== */

    {
        char text[] = "apple,banana,,orange;grape";

        char *tok = strtok(text, ",;");
        assert(strcmp(tok, "apple") == 0);

        tok = strtok(NULL, ",;");
        assert(strcmp(tok, "banana") == 0);

        tok = strtok(NULL, ",;");
        assert(strcmp(tok, "orange") == 0);

        tok = strtok(NULL, ",;");
        assert(strcmp(tok, "grape") == 0);

        tok = strtok(NULL, ",;");
        assert(tok == NULL);
    }

    {
        char text[] = ",,,";
        assert(strtok(text, ",") == NULL);
    }

    {
        char text[] = "abc";
        char *tok = strtok(text, ",");
        assert(strcmp(tok, "abc") == 0);
        assert(strtok(NULL, ",") == NULL);
    }

    /* ===================== memcpy ===================== */

    {
        char src[] = "hello";
        char dst[16];

        memcpy(dst, src, 6);

        assert(strcmp(dst, "hello") == 0);
    }

    /* ===================== memmove ===================== */

    {
        char s[] = "abcdef";

        memmove(s + 2, s, 4);

        assert(memcmp(s, "ababcd", 6) == 0);
    }

    {
        char s[] = "abcdef";

        memmove(s, s + 2, 4);

        assert(memcmp(s, "cdefef", 6) == 0);
    }

    /* ===================== memset ===================== */

    {
        char s[8];

        memset(s, 'A', 8);

        for (int i = 0; i < 8; i++)
            assert(s[i] == 'A');
    }

    /* ===================== memcmp ===================== */

    {
        char a[] = {1,2,3};
        char b[] = {1,2,3};
        char c[] = {1,2,4};

        assert(memcmp(a,b,3) == 0);
        assert(memcmp(a,c,3) < 0);
        assert(memcmp(c,a,3) > 0);
        assert(memcmp(a,c,0) == 0);
    }

    /* ===================== memchr ===================== */

    {
        char s[] = {'a','b','c','d'};

        assert(memchr(s, 'a', 4) == &s[0]);
        assert(memchr(s, 'c', 4) == &s[2]);
        assert(memchr(s, 'x', 4) == NULL);
        assert(memchr(s, 'd', 2) == NULL);
    }

    return 0;
}