

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *targetFile;
    char ch;



    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error: Cannot open source file!\n");
        return 1;
    }


    targetFile = fopen("target.txt", "w");
    if (targetFile == NULL) {
        printf("Error: Cannot open target file!\n");
        fclose(sourceFile);
        return 1;
    }


    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    printf("File copied successfully!\n");

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
