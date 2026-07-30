#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *text = "12345abc";
    size_t n = strspn(text, "0123456789");

    printf("Leading digits: %zu\n", n);
    printf("Remaining text: %s\n", text + n);

    return 0;
}