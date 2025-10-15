// Declare a global variable outside all functions and use it inside various functions to understand its accessibility.
#include <stdio.h>

int globalVar = 10; // Global variable declaration

void function1() {
    printf("Function 1: Global variable = %d\n", globalVar);
}

void function2() {
    globalVar += 5;
    printf("Function 2: Global variable = %d\n", globalVar);
}

int main() {
    printf("Main: Global variable = %d\n", globalVar);
    function1();
    function2();
    printf("Main after function calls: Global variable = %d\n", globalVar);
    return 0;
}
