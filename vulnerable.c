#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *ptr = malloc(10);
    strcpy(ptr, "This is longer than 10 bytes!"); // buffer overflow
    printf("Data: %s\n", ptr);
    free(ptr);
    free(ptr); // double free error
    return 0;
}
