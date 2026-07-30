#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *text = "hello, world";
    size_t n = strcspn(text, ",");

    printf("Characters before ',': %zu\n", n);
    printf("Delimiter found: %c\n", text[n]);

    return 0;
}