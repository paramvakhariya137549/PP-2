// Program to enter N elements and arrange the list in ascending order using selection sort

#include <stdio.h>

int main() {
    int arr[100], n, i, j, minIndex, temp;

    // Step 1: Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Selection sort algorithm
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap if a smaller element is found
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    // Step 4: Print sorted list
    printf("Sorted list in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
