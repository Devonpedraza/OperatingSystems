#include <stdio.h>

int main() {
    printf("Printing the averages of ages in an array\n");
    // Calculate the Average for the different ages in an Array
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages)/sizeof(ages[0]);
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += ages[i];
    }
    printf("The average age is: %.2f\n\n", (float)sum/length);
    return 0;
}