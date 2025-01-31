#include <stdio.h>

int main() {
        int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
        printf("Finding the lowest age in the array\n");
    int minAge = ages[0];
    int length = sizeof(ages)/sizeof(ages[0]);
    for (int i = 1; i < length; i++)
    {
        if (ages[i] < minAge)
        {
            minAge = ages[i];
        }
    }
    printf("The lowest age is: %d\n\n", minAge);
    return 0;
}