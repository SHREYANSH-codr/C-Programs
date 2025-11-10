/*Develop a C function ISPRIME (num) that accepts an integer argument and
returns 1 if the argument is prime, a 0 otherwise. Write a C program that
invokes this function to generate prime numbers between the given ranges */

#include <stdio.h>

// Function to check if a number is prime
int ISPRIME(int num) {
    int i;
    if (num <= 1)
        return 0; // 0 and 1 are not prime

    for (i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0; // Not prime
    }

    return 1; // Prime
}

int main() {
    int start, end, i;

    printf("Enter the starting number of range: ");
    scanf("%d", &start);

    printf("Enter the ending number of range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (ISPRIME(i))
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
