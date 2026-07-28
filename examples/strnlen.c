#include "string.h"
#include <stdio.h>

#define BUFFER_SIZE 256

int main() {

    char buffer[BUFFER_SIZE];

    for (int i = 0; i < BUFFER_SIZE / 2; i++) {
        buffer[i] = 'A';
    }

    // Not include the null digit may result in logic bug because of uninitialized data 

    printf("Length of string on buffer: %zu\n", strnlen(buffer, BUFFER_SIZE));
}