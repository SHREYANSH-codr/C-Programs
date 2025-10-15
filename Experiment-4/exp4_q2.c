// Declare a local variable inside a function and try to access it outside the function. Compare this with accessing the global variable from within the function.
#include <stdio.h>

// Global variable
int globalVar = 100;

// Function demonstrating local variable
void demoLocal() {
    int localVar = 50;  // Local variable
    printf("Inside demoLocal(): localVar = %d\n", localVar);
    printf("Inside demoLocal(): globalVar = %d\n", globalVar);
}

int main() {
    printf("In main(): globalVar = %d\n", globalVar);

    demoLocal();

    // Trying to access localVar outside its function will cause an error
    // printf("In main(): localVar = %d\n", localVar); // Uncommenting this line will give a compile-time error

    // Accessing globalVar from main works fine
    globalVar += 20;
    printf("In main() after modification: globalVar = %d\n", globalVar);

    return 0;
}
