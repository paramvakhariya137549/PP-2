#include <stdio.h>

int main() {
    int n, i;

    printf("How many elements? ");
    scanf("%d", &n);

    int arr[n]; // Create array of size n

    // Loop to enter elements
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Loop to print elements
    printf("\nYour elements are: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
