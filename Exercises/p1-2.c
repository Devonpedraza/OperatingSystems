
#include <stdio.h>
int main(){
    int num = 5;
    char letter = 'A';
    double value = 3.14;


    printf("Value: %d\n", num);
    printf("Address: %p\n", &num);
    printf("Size of int: %lu\n", sizeof(num));

    printf("Value: %c\n", letter);
    printf("Address: %p\n", &letter);
    printf("Size of char: %lu\n", sizeof(letter));

    printf("Value: %f\n", value);
    printf("Address: %p\n", &value);
    printf("Size of double: %lu\n", sizeof(value));

    int num1, num2;
    int *ptr = &num1;
    int *ptr2 = &num2;
    printf("Enter Two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("The result of each number from the pointer is: %d \n", *ptr + *ptr2);

    

    return 0;
}
