/*Write a function that accepts pointers as parameters. Pass variables by
reference using pointers and modify their values within the function */

#include <stdio.h>

// Function that modifies values using pointers
void modifyValues(int *x, float *y, char *z) {
    *x = *x + 10;     // add 10 to integer
    *y = *y * 2;      // double the float
    *z = *z + 1;      // change character to next ASCII value
}

int main() {
    int num = 5;
    float price = 12.5;
    char letter = 'A';

    printf("Before function call:\n");
    printf("num = %d, price = %.2f, letter = %c\n\n", num, price, letter);

    // Passing variables by reference
    modifyValues(&num, &price, &letter);

    printf("After function call:\n");
    printf("num = %d, price = %.2f, letter = %c\n", num, price, letter);

    return 0;
}
