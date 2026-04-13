

#include <stdio.h>
#include <string.h>

int main() {
    char a[50], b[50];
    printf("Enter 2 strings:\n");
    scanf("%s %s", a, b);
    if(strcmp(a, b) == 0) printf("Strings are same\n");
    else printf("Strings are different\n");
    return 0;
}
