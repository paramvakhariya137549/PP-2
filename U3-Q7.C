
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and cols: ");
    scanf("%d %d", &m, &n);

    int a[m][n], b[m][n], sum[m][n];
    int *pa[m], *pb[m], *ps[m];
    for(int i=0;i<m;i++) {
        pa[i]=a[i]; pb[i]=b[i]; ps[i]=sum[i];
    }

    printf("Enter matrix A:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) scanf("%d",&pa[i][j]);

    printf("Enter matrix B:\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) scanf("%d",&pb[i][j]);

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) ps[i][j]=pa[i][j]+pb[i][j];

    printf("Sum matrix:\n");
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) printf("%d ",ps[i][j]);
        printf("\n");
    }
    return 0;
}
