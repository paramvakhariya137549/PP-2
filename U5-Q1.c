// Program to enter N elements and search a value from the list using linear search

#include <stdio.h>

int main() {
    int arr[100], n, i, search, found = 0;

    // Step 1: Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Step 2: Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Input value to search
    printf("Enter value to search: ");
    scanf("%d", &search);

    // Step 4: Perform linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Value %d found at position %d.\n", search, i + 1);
            found = 1;
            break;
        }
    }

    // Step 5: If not found
    if (!found) {
        printf("Value %d not found in the list.\n", search);
    }

    return 0;
}
