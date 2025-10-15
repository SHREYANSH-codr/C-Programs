//According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year
#include <stdio.h>

int main() {
    int year, totalDays = 0, day;
    char *daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    // Input year
    printf("Enter the year: ");
    scanf("%d", &year);

    // Calculate total number of days from 01/01/01 to 01/01/year
    for (int y = 1; y < year; y++) {
        // Check for leap year
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            totalDays += 366;
        else
            totalDays += 365;
    }

    // Find day of the week (01/01/01 was Monday)
    day = totalDays % 7;

    // Print result
    printf("1st January %d was a %s.\n", year, daysOfWeek[day]);

    return 0;
}
