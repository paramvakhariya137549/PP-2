
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int empcode;
    char empname[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e;
    int n, i;


    fp = fopen("EMP.dat", "wb");  

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of employee %d\n", i + 1);
        printf("Empcode: ");
        scanf("%d", &e.empcode);
        printf("Empname: ");
        scanf("%s", e.empname);
        printf("Salary: ");
        scanf("%f", &e.salary);

        fwrite(&e, sizeof(struct Employee), 1, fp);  // write struct to file
    }
    fclose(fp);

   

    fp = fopen("EMP.dat", "rb");   

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nEmployee Records:\n");
    while (fread(&e, sizeof(struct Employee), 1, fp)) {
        printf("Empcode: %d\n", e.empcode);
        printf("Empname: %s\n", e.empname);
        printf("Salary: %.2f\n\n", e.salary);
    }

    fclose(fp);
    return 0;
}
