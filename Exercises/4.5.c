#include <stdio.h>

struct house {
    char address[100];
    int squarefeet;
    int bedrooms;
    int bathrooms;
    double price;
};

int main() {
    struct house house1 = {"123 Maple Street", 2000, 3, 2, 250000.00};
    struct house house2 = {"456 Oak Avenue", 1500, 2, 1, 180000.00};
    struct house house3 = {"789 Pine Road", 2500, 4, 3, 320000.00};

    printf("House 1:\n");
    printf("Address: %s\n", house1.address);
    printf("Square Feet: %d\n", house1.squarefeet);
    printf("Bedrooms: %d\n", house1.bedrooms);
    printf("Bathrooms: %d\n", house1.bathrooms);
    printf("Price: $%.2f\n\n", house1.price);

    printf("House 2:\n");
    printf("Address: %s\n", house2.address);
    printf("Square Feet: %d\n", house2.squarefeet);
    printf("Bedrooms: %d\n", house2.bedrooms);
    printf("Bathrooms: %d\n", house2.bathrooms);
    printf("Price: $%.2f\n\n", house2.price);

    printf("House 3:\n");
    printf("Address: %s\n", house3.address);
    printf("Square Feet: %d\n", house3.squarefeet);
    printf("Bedrooms: %d\n", house3.bedrooms);
    printf("Bathrooms: %d\n", house3.bathrooms);
    printf("Price: $%.2f\n", house3.price);

    return 0;
}