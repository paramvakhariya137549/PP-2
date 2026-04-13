
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sumOdd=0, sumEven=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n*sizeof(int));

    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) sumEven += arr[i];
        else sumOdd += arr[i];
    }
    printf("Sum Even = %d, Sum Odd = %d\n", sumEven, sumOdd);
    free(arr);
    return 0;
}

