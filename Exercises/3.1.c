#include <stdio.h>

int main() {
    int myNumbers[4] = {25,50,75,100};
    
    printf("%p\n", &myNumbers);

    printf("%p\n", &myNumbers[0]);

    int *ptr = myNumbers; // Pointer to the first element of the array
    printf("%d\n", *(ptr + 1)); // Print the second element using the pointer
    
    return 0;
}