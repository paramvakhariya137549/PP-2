
#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if(num < 2) return 0;
    for(int i=2; i*i<=num; i++)
        if(num % i == 0) return 0;
    return 1;
}

int main() {
    int n, i, sum=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n*sizeof(int));

    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(isPrime(arr[i])) sum += arr[i];
    }
    printf("Sum of primes = %d\n", sum);
    free(arr);
    return 0;
}
