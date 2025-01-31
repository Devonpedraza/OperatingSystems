#include <stdio.h>

int main() {
    int numberOfItems = 50;
    float costPerItem = 9.99;
    float totalCost = numberOfItems * costPerItem;

    printf("Number of items: %d\n", numberOfItems);
    printf("Cost per item: $%.2f\n", costPerItem);
    printf("Total cost: $%.2f\n", totalCost);

    return 0;
}