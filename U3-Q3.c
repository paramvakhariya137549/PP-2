#include <stdio.h>


int max(int a, int b) {
    return (a > b) ? a : b;
}


int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;
    int (*funcPtr)(int, int);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);


    funcPtr = max;
    printf("Maximum = %d\n", funcPtr(x, y));


    funcPtr = min;
    printf("Minimum = %d\n", funcPtr(x, y));

    return 0;
}
