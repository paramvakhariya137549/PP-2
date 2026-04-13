
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m,n;
    printf("Enter rows and cols: ");
    scanf("%d %d",&m,&n);

    int **a=(int**)malloc(m*sizeof(int*));
    int **b=(int**)malloc(m*sizeof(int*));
    int **diff=(int**)malloc(m*sizeof(int*));

    for(int i=0;i<m;i++) {
        a[i]=(int*)malloc(n*sizeof(int));
        b[i]=(int*)malloc(n*sizeof(int));
        diff[i]=(int*)malloc(n*sizeof(int));
    }

    printf("Enter matrix A:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) scanf("%d",&a[i][j]);

    printf("Enter matrix B:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) scanf("%d",&b[i][j]);

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) diff[i][j]=a[i][j]-b[i][j];

    printf("Difference matrix:\n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) printf("%d ",diff[i][j]);
        printf("\n");
    }
    return 0;
}

