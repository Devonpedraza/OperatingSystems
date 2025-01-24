#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void readFile() {
    char buffer[255];
    FILE *file = fopen("hello.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    while (fgets(buffer, sizeof(buffer), file)) {
        printf("%s", buffer);
    }
    fclose(file);
}

int main(){
    readFile();
    return 0;
}