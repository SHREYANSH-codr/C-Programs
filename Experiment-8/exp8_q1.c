/*Declare different types of pointers (int, float, char) and initialize them with the
addresses of variables. Print the values of both the pointers and the variables
they point to. */

#include <stdio.h>

int main() {
    int a = 10;
    float b = 25.75;
    char c = 'A';

    // Pointer declarations
    int *ptr_int;
    float *ptr_float;
    char *ptr_char;

    // Initialize pointers with the addresses of variables
    ptr_int = &a;
    ptr_float = &b;
    ptr_char = &c;

    // Display variable values and their addresses
    printf("Value of a = %d\t\tAddress of a = %p\n", a, (void*)&a);
    printf("Value of b = %.2f\tAddress of b = %p\n", b, (void*)&b);
    printf("Value of c = %c\t\tAddress of c = %p\n\n", c, (void*)&c);

    // Display pointer values (addresses) and the values they point to
    printf("Value of ptr_int (address stored) = %p\tValue pointed by ptr_int = %d\n", (void*)ptr_int, *ptr_int);
    printf("Value of ptr_float (address stored) = %p\tValue pointed by ptr_float = %.2f\n", (void*)ptr_float, *ptr_float);
    printf("Value of ptr_char (address stored) = %p\tValue pointed by ptr_char = %c\n", (void*)ptr_char, *ptr_char);

    return 0;
}
