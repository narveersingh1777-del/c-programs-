#include <stdio.h>

int main() {
    int var = 20;
    int *ptr = &var;

    printf("Address of var variable: %p\n", &var);
    printf("Address stored in ptr variable: %p\n", ptr);
    printf("Value of *ptr variable: %d\n", *ptr);
    return 0;
}
