#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *text = "The quick brown fox jumps over the lazy dog";
    const char *result;

    result = strstr(text, "brown");
    if (result != NULL)
        printf("Found: \"%s\"\n", result);
    else
        printf("Substring not found.\n");

    result = strstr(text, "cat");
    if (result != NULL)
        printf("Found: \"%s\"\n", result);
    else
        printf("Substring not found.\n");

    return 0;
}