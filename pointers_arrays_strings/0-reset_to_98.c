#include "main.h"

void update_to_98(int *n) {
    *n = 98;  // Dereference the pointer and set the value to 98
}

int main() {
    int num = 0;  // Initialize an integer variable
    printf("Before: %d\n", num);
    update_to_98(&num);  // Pass the address of num to the function
    printf("After: %d\n", num);
    return 0;
}
