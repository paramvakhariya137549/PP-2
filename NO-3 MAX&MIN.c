#include <stdio.h>

int main() {
    int n, i;
    float num, max, min;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%f", &num);

        if (i == 1) {
            max = num;
            min = num;
        } else {
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
    }

    printf("\nMaximum value: %.2f", max);
    printf("\nMinimum value: %.2f\n", min);

    return 0;
}

