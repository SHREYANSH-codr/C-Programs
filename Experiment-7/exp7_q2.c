/*Write a C program to compute the monthly pay of 100 employees using each
employee‗s name, basic pay. The DA is computed as 52% of the basic pay.
Gross-salary (basic pay + DA). Print the employees name and gross salary. */

#include <stdio.h>

#define SIZE 100  // Number of employees

// Define structure to store employee details
struct Employee {
    char name[50];
    float basicPay;
    float DA;
    float grossSalary;
};

int main() {
    struct Employee emp[SIZE];
    int i, n;

    printf("Enter the number of employees (up to 100): ");
    scanf("%d", &n);

    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d \n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);  // Simple name input (no spaces)
        printf("Basic Pay: ");
        scanf("%f", &emp[i].basicPay);

        // Calculate DA and Gross Salary
        emp[i].DA = 0.52 * emp[i].basicPay;
        emp[i].grossSalary = emp[i].basicPay + emp[i].DA;
    }

    // Display results
    printf("\n--------------------------------------------------\n");
    printf("Employee Name\t\tGross Salary\n");
    printf("--------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-20s\t%.2f\n", emp[i].name, emp[i].grossSalary);
    }

    printf("--------------------------------------------------\n");

    return 0;
}
