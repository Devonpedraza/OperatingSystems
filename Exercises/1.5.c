#include <stdio.h>

int main() {
    float temperature;
    
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &temperature);
    
    if (temperature > 70 && temperature < 85) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    
    return 0;
}