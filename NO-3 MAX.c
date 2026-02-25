#include <stdio.h>

int main() {
    int n, i;
    float num, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%f", &num);

        if (i == 1 || num > max) {
            max = num;
        }
    }

    printf("\nMaximum value: %.2f\n", max);

    return 0;
}

