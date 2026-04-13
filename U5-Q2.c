// Program to enter N elements and search a value from the list using binary search (without recursion)

#include <stdio.h>

int main() {
    int arr[100], n, i, search;
    int low, high, mid, found = 0;

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

    // Step 4: Perform binary search (iterative)
    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == search) {
            printf("Value %d found at position %d.\n", search, mid + 1);
            found = 1;
            break;
        }
        else if (arr[mid] < search) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    // Step 5: If not found
    if (!found) {
        printf("Value %d not found in the list.\n", search);
    }

    return 0;
}
