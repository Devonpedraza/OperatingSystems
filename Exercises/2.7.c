#include <stdio.h>

int main() {
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
    return 0;
}