#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr = &num1;
    int *ptr2 = &num2;
    printf("Enter Two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("The result of each number from the pointer is: %d \n", *ptr + *ptr2);
    return 0;
}