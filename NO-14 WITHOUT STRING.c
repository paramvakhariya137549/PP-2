#include <stdio.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (length = 0; str[length] != '\0'; length++) {
        if (str[length] == '\n') {
            str[length] = '\0';
            break;
        }
    }
    printf("Length: %d\n", length);
    printf("Reversed: ");

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
