#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int source[n], destination[n];

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &source[i]);
    }

    for (i = 0; i < n; i++) {
        destination[i] = source[i];
    }

    printf("\nElements in Destination Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}

