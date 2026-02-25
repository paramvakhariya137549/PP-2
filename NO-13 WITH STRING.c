
#include <stdio.h>
#include <string.h> // Header file for strlen()

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    // Using fgets to allow spaces in the input
    fgets(str, sizeof(str), stdin);

    /*
       Note: fgets() includes the newline character (\n) in the string.
       We use strcspn to remove it so it doesn't count toward the length.
    */
    str[strcspn(str, "\n")] = '\0';

    // Using the string function
    length = strlen(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}
