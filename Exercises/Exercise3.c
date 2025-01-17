
#include <stdio.h>
int main() {
    int num = 10;

    while (num > 0)
    {
        printf("%d\n", num);
        num--;
    }
    printf("Happy New Year!\n");


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



    // Count to 100 by 10 
    printf("Counting to 100 by 10\n");
    for (int i = 0; i <= 100; i+=10)
    {
        printf("%d\n", i);
    }

    // Print multiplication tables
    printf("Printing Multiplication Tables\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n\n", i, j, i*j);
        }
    }

    printf("Printing the averages of ages in an array\n");
    // Calculate the Average for the different ages in an Array
    int ages[] = {10, 20, 30, 40, 50 ,15 ,20 ,25 ,30 ,35};
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += ages[i];
    }
    printf("The average age is: %f\n\n", (float)sum/10);


    printf("Finding the lowest age in the array\n");
    int minAge = ages[0];
    for (int i = 1; i < 10; i++)
    {
        if (ages[i] < minAge)
        {
            minAge = ages[i];
        }
    }
    printf("The lowest age is: %d\n\n", minAge);

    return 0;
}