#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    if (num < 0) {
        printf("The number is negative\n");
    } else if (num > 0) {
        printf("The number is positive\n");
    } else
    {
        printf("The number is zero\n");
    }

    if (num % 2 == 1)
    {
        printf("The number is odd\n");
    } else if (num % 2 == 0){
        printf("The number is even\n");
    }
    
    
    return 0;
}