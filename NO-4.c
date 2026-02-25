#include <stdio.h>

int main() {
    int n, i, val;
    int pos = 0, neg = 0, even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &val);

        if (val > 0) {
            pos++;
        } else if (val < 0) {
            neg++;
        }

        if (val % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("\nPositive numbers: %d", pos);
    printf("\nNegative numbers: %d", neg);
    printf("\nEven numbers: %d", even);
    printf("\nOdd numbers: %d\n", odd);

    return 0;
}

