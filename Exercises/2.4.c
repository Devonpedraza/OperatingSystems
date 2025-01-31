#include <stdio.h>

int main() {
    // Print multiplication tables
    printf("Printing Multiplication Tables\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n\n", i, j, i*j);
        }
    }
    return 0;
}