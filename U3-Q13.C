
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);
    int len = strlen(s);
    printf("Reverse: ");
    for(int i=len-1; i>=0; i--) printf("%c", s[i]);
    printf("\n");
    return 0;
}
