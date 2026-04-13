#include <stdio.h>
#include <string.h>

int main() {
    char a[50], b[50];
    printf("Enter 2 strings:\n");
    scanf("%s %s", a, b);
    strcat(a, b);
    printf("Concatenated string: %s\n", a);
    return 0;
}
