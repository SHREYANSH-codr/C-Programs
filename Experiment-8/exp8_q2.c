/*Perform pointer arithmetic (increment and decrement) on pointers of different
data types. Observe how the memory addresses change and the effects on
data access */

#include <stdio.h>

int main() {
    int a = 10;
    float b = 25.75;
    char c = 'A';

    int *ptr_int = &a;
    float *ptr_float = &b;
    char *ptr_char = &c;

    printf("Initial addresses and values:\n");
    printf("ptr_int   = %p, *ptr_int   = %d\n", (void*)ptr_int, *ptr_int);
    printf("ptr_float = %p, *ptr_float = %.2f\n", (void*)ptr_float, *ptr_float);
    printf("ptr_char  = %p, *ptr_char  = %c\n\n", (void*)ptr_char, *ptr_char);

    // Increment pointers
    ptr_int++;
    ptr_float++;
    ptr_char++;

    printf("After incrementing pointers:\n");
    printf("ptr_int   = %p (moved by %lu bytes)\n", (void*)ptr_int, sizeof(int));
    printf("ptr_float = %p (moved by %lu bytes)\n", (void*)ptr_float, sizeof(float));
    printf("ptr_char  = %p (moved by %lu byte)\n\n", (void*)ptr_char, sizeof(char));

    // Decrement pointers (back to original)
    ptr_int--;
    ptr_float--;
    ptr_char--;

    printf("After decrementing pointers (back to original):\n");
    printf("ptr_int   = %p, *ptr_int   = %d\n", (void*)ptr_int, *ptr_int);
    printf("ptr_float = %p, *ptr_float = %.2f\n", (void*)ptr_float, *ptr_float);
    printf("ptr_char  = %p, *ptr_char  = %c\n", (void*)ptr_char, *ptr_char);

    return 0;
}
