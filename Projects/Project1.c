#include <stdio.h>
int main() {
    int Tempurature;
    printf("Enter A temperature: ");

    scanf("%d\n",&Tempurature);

    printf("%d\n", Tempurature < 85 && Tempurature > 70);

    return 0;
}