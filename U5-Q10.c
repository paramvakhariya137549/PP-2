// Program to sort 5 strings in descending order

#include <stdio.h>
#include <string.h>

int main() {
    char str[5][50], temp[50];
    int i, j;

    // Step 1: Input 5 strings
    printf("Enter 5 strings:\n");
    for (i = 0; i < 5; i++) {
        scanf("%s", str[i]);
    }

    // Step 2: Sort strings in descending order using bubble sort logic
    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(str[i], str[j]) < 0) {  // descending order
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    // Step 3: Print sorted strings
    printf("\nStrings in descending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}

