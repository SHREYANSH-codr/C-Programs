//Ramanujan Number is the smallest number that can be expressed as the sum of two cubes in two different ways. WAP to print all such numbers up to a reasonable limit.
#include <stdio.h>
#include <math.h>

int main() {
    int limit = 10000; // Set a reasonable limit
    int a, b, c, d;
    int found;

    printf("Ramanujan numbers up to %d:\n", limit);

    for(int n = 1; n <= limit; n++) {
        found = 0; // Count how many ways n can be expressed as sum of two cubes

        for(a = 1; a <= cbrt(n); a++) {
            for(b = a; b <= cbrt(n); b++) {
                if(a*a*a + b*b*b == n) {
                    if(found == 0) {
                        printf("%d = %d^3 + %d^3", n, a, b);
                        found = 1;
                    } else {
                        printf(" = %d^3 + %d^3", a, b);
                        found = 2;
                        break; // We found two representations
                    }
                }
            }
            if(found == 2)
                break;
        }

        if(found == 2)
            printf("\n");
    }

    return 0;
}
