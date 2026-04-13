#include <stdio.h>
#define PI 3.14159

void area(float *r, float *a) {
    *a = PI * (*r) * (*r);
}

int main() {
    float radius, areaCircle;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area(&radius, &areaCircle);
    printf("Area = %.2f\n", areaCircle);
    return 0;
}

