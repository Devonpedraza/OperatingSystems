#include <stdio.h>
#include <math.h>
void fahrenheitTocelsius (int fahrenheit){
    float celsius = (fahrenheit - 32) * 5.0/9.0;
    printf("%d Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);
}

void areaCalulation(int x, int y){
    int area = x * y;
    printf("The area of the rectangle is %d\n", area);
}

void calculateAreaFromRadius(int x){
    int area = pow(x, 2) * M_PI;
    printf("The area using the circumference of %d is %d\n", x, area);
}
int main() {
    fahrenheitTocelsius(64);

    areaCalulation(5, 10);

    calculateAreaFromRadius(10);
    return 0;
}