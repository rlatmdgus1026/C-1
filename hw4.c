#include <stdio.h>
# 

int main() 

{
    int num, i;
    int isPrime = 1; 

    
    printf("please enter a number: ");
    scanf_s("%d", &num);

    
    if (num < 2) {
        isPrime = 0;
    }
    else {
        
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

   
    if (isPrime)
        printf("It is a prime number.\n");
    else
        printf("It is not a prime number.\n");

    return 0;
}
