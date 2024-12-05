#include <stdio.h>

#define MAX_CITIES 3


typedef struct {
    char name[50];
    char country[50];
    int population;
} City;

int main() {
    City cities[MAX_CITIES];
    printf("Input three cities:\n");

    
    for (int i = 0; i < MAX_CITIES; i++) {
        printf("Name> ");
        scanf_s(" %[^\n]", cities[i].name);  
        printf("Country> ");
        scanf_s(" %[^\n]", cities[i].country);  
        printf("Population> ");
        scanf_s("%d", &cities[i].population);  
    }

    
    printf("\nPrinting the three cities:\n");
    for (int i = 0; i < MAX_CITIES; i++) {
        printf("%d. %s in %s with a population of %d people\n",
            i + 1, cities[i].name, cities[i].country, cities[i].population);
    }

    return 0;
}
