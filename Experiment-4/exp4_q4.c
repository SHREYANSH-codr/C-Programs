//Declare a static local variable inside a function. Observe how its value persists across function calls.
#include <stdio.h>

void demoStatic() {
    static int count = 0;  // Static local variable
    count++;
    printf("Inside demoStatic(): count = %d\n", count);
}

int main() {
    demoStatic();
    demoStatic();
    demoStatic();
    return 0;
}
