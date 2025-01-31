#include <stdio.h>

int main() {
    printf("Printing Numbers from 0 to 10\n");
    int count = 11;
    // Print even numbers from 0 to 10 
    for (int i = 0; i < count; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}