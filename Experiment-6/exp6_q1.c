/*Develop a recursive and non-recursive function FACT(num) to find the
factorial of a number, n!, defined by FACT(n) = 1, if n = 0. Otherwise, FACT(n)
= n * FACT(n-1). Using this function, write a C program to compute the
binomial coefficient. Tabulate the results for different values of n and r with
suitable messages */

#include <stdio.h>

// Recursive function to find factorial
long FACT_recursive(int num) {
    if(num == 0)
        return 1;
    else
        return num * FACT_recursive(num - 1);
}

// Non-recursive (iterative) function to find factorial
long FACT_nonrecursive(int num) {
    long fact = 1;
    int i;
    for(i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to compute binomial coefficient C(n, r)
long binomialCoeff(int n, int r, int useRecursive) {
    long nFact, rFact, nrFact;
    if(useRecursive) {
        nFact = FACT_recursive(n);
        rFact = FACT_recursive(r);
        nrFact = FACT_recursive(n - r);
    } else {
        nFact = FACT_nonrecursive(n);
        rFact = FACT_nonrecursive(r);
        nrFact = FACT_nonrecursive(n - r);
    }
    return nFact / (rFact * nrFact);
}

int main() {
    int n, r, useRecursive, i, j;

    printf("Enter the maximum value of n (for table): ");
    scanf("%d", &n);

    printf("Use recursive factorial? (1 = Yes, 0 = No): ");
    scanf("%d", &useRecursive);

    printf("\nBinomial Coefficient Table (C(n, r))\n");
    printf("------------------------------------\n");
    printf("  n   r   C(n, r)\n");
    printf("------------------------------------\n");

    for(i = 0; i <= n; i++) {
        for(j = 0; j <= i; j++) {
            printf("%3d %3d %8ld\n", i, j, binomialCoeff(i, j, useRecursive));
        }
    }

    printf("------------------------------------\n");
    printf("Computed using %s function.\n",
           useRecursive ? "recursive FACT()" : "non-recursive FACT()");

    return 0;
}
