#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char str[100];

    fp = fopen("example1.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);
    fputs(str, fp);
    fclose(fp);


    fp = fopen("example1.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nContent of the file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);
    return 0;
}
