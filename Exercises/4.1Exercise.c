#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void createFile() {
    FILE *file = fopen("hello.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "Hello,\n\nHow are you?\n\nMy name is …\n\nWhat’s your name?\n");
    fclose(file);
}

int main(){
    createFile();
    return 0;
}