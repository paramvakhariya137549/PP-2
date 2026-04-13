
// Program to enter N elements and arrange the list in ascending order using Insertion Sort

#include <stdio.h>

int main() {
    int arr[100], n, i, j, key;

    // Step 1: Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Insertion Sort algorithm
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // Step 4: Print sorted list
    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
