#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Allocate memory to store scores
    int *scores = (int *)malloc(num_students * sizeof(int));
    if (scores == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    // Get scores from user
    for (int i = 0; i < num_students; i++) {
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Open file to write scores
    FILE *file = fopen("scores.txt", "w");
    if (file == NULL) {
        fprintf(stderr, "Could not open file\n");
        free(scores);
        return 1;
    }

    // Write scores in reversed order to file
    for (int i = num_students - 1; i >= 0; i--) {
        fprintf(file, "%d\n", scores[i]);
    }

    // Free memory and close file
    free(scores);
    fclose(file);

    printf("Scores have been written to scores.txt in reversed order.\n");
    return 0;
}