//The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.

#include <stdio.h>
int main() {
    int initial_population = 100000;
    float growth_rate = 0.10; // 10%
    int years = 10;

    printf("Year\tPopulation\n");
    printf("---------------------\n");

    for(int year = 1; year <= years; year++) {
        initial_population += initial_population * growth_rate; // Increase population by 10%
        printf("%d\t%d\n", year, initial_population);
    }

    return 0;
}