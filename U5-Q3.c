// Program to enter N elements and search a value from the list using binary search (with recursion)

#include <stdio.h>

// Recursive function for binary search
int binarySearch(int arr[], int low, int high, int search) {
    if (low > high) {
        return -1; // not found
    }

    int mid = (low + high) / 2;

    if (arr[mid] == search) {
        return mid; // found
    }
    else if (arr[mid] > search) {
        return binarySearch(arr, low, mid - 1, search);
    }
    else {
        return binarySearch(arr, mid + 1, high, search);
    }
}

int main() {
    int arr[100], n, i, search, result;

    // Step 1: Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input elements (must be sorted for binary search)
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Input value to search
    printf("Enter value to search: ");
    scanf("%d", &search);

    // Step 4: Call recursive binary search
    result = binarySearch(arr, 0, n - 1, search);

    // Step 5: Print result
    if (result != -1) {
        printf("Value %d found at position %d.\n", search, result + 1);
    } else {
        printf("Value %d not found in the list.\n", search);
    }

    return 0;
}
