


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char str[100];



    fp = fopen("example.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(str, sizeof(str), stdin);  


    fputs(str, fp);                

    fclose(fp);

    printf("Content appended successfully!\n");


    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nUpdated file content:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);
    return 0;
}
