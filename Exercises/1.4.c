#include <stdio.h>

int main() {
    int max_score = 500;
    int user_score = 423;
    float percentage;

    percentage = ((float)user_score / max_score) * 100;

    printf("User score percentage: %.2f%%\n", percentage);

    return 0;
}