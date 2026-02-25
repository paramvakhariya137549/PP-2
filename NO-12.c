
#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("\nYour name vertically:\n");

    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            continue;
        }

        printf("%c\n", name[i]);
    }

    return 0;
}
