#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int empcode;
    char empname[50];
    float salary;
};

int main() {
    FILE *fp;
    struct Employee e, highest;
    int n, i;

    

    fp = fopen("EMP.txt", "w");
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

        fwrite(&e, sizeof(struct Employee), 1, fp);
    }
    fclose(fp);

    

    fp = fopen("EMP.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    highest.salary = -1; // initialize with a very low value

    while (fread(&e, sizeof(struct Employee), 1, fp)) {
        if (e.salary > highest.salary) {
            highest = e;
        }
    }
    fclose(fp);

   

    printf("\nEmployee with highest salary:\n");
    printf("Empcode: %d\n", highest.empcode);
    printf("Empname: %s\n", highest.empname);
    printf("Salary: %.2f\n", highest.salary);

    return 0;
}
