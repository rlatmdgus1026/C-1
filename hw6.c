#include <stdio.h>

int main() {
    int numbers[5];    
    int odd[5], even[5];   
    int odd_count = 0, even_count = 0;

    printf("Please input five integers: ");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &numbers[i]);
    }

    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            even[even_count++] = numbers[i];
        }
        else {
            odd[odd_count++] = numbers[i];
        }
    }
    printf("Odd numbers: ");
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }

    printf("\n");

    return 0;
}
