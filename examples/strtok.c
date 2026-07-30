#include <stdio.h>
#include <string.h>

int main(void)
{
    char text[] = ",apple,banana,,orange;grape";
    const char *delim = ",;";

    char *token = strtok(text, delim);

    while (token != NULL)
    {
        printf("Token: \"%s\"\n", token);
        token = strtok(NULL, delim);
    }

    return 0;
}