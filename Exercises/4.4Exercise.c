#include <stdio.h>
#include <string.h>

int main() {
    FILE *filePointer;
    char dataToBeWritten[50] = "This is the data to be written to the file.";

    filePointer = fopen("file.txt", "w");
    if (filePointer == NULL) {
        printf("Error opening file");
        return 1;
    } else {
        printf("The file is now opened.\n");
    }

    if (strlen(dataToBeWritten) > 0) {
        fputs(dataToBeWritten, filePointer);
        printf("Data successfully written to the file.\n");
    }

    fclose(filePointer);
    printf("The file is now closed.\n");

    return 0;
}