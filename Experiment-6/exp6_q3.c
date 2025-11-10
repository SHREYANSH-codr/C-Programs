/*Develop a recursive function FIBO (num) that accepts an integer argument.
Write a C program that invokes this function to generate the Fibonacci
sequence up to num. */

#include <stdio.h>

// Recursive function to find the nth Fibonacci number
int FIBO(int num) {
    if(num == 0)
        return 0;
    else if(num == 1)
        return 1;
    else
        return FIBO(num - 1) + FIBO(num - 2);
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence up to %d terms:\n", n);
    for(i = 0; i < n; i++) {
        printf("%d ", FIBO(i));
    }

    printf("\n");
    return 0;
}
