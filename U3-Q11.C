
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    for(int i=0; s[i]; i++) s[i] = toupper(s[i]);
    printf("Uppercase: %s\n", s);
    return 0;
}
