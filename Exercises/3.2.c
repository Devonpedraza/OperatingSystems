#include <stdio.h>

int main() {
    int myNumbers[4] = {25,50,75,100};
    
    printf("%p\n", &myNumbers);

    printf("%p\n", &myNumbers[0]);

    int *ptr = myNumbers; // Pointer to the first element of the array

    for (int i = 0; i < 4; i++) {
        printf("%d ", *(ptr + i)); // Print each element using the pointer
    }
    printf("\n"); // Print a newline at the end

    return 0;
}