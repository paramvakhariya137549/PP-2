#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *dataFile, *oddFile, *evenFile;
    int num;



    dataFile = fopen("DATA.txt", "w");
    if (dataFile == NULL) {
        printf("Error opening DATA.txt for writing!\n");
        return 1;
    }

    for (num = 1; num <= 10; num++) {
        fprintf(dataFile, "%d\n", num);
    }
    fclose(dataFile);



    dataFile = fopen("DATA.txt", "r");
    if (dataFile == NULL) {
        printf("Error opening DATA.txt for reading!\n");
        return 1;
    }

 

    oddFile = fopen("ODD.txt", "w");
    evenFile = fopen("EVEN.txt", "w");
    if (oddFile == NULL || evenFile == NULL) {
        printf("Error opening ODD.txt or EVEN.txt!\n");
        fclose(dataFile);
        return 1;
    }

    

    while (fscanf(dataFile, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(evenFile, "%d\n", num);
        } else {
            fprintf(oddFile, "%d\n", num);
        }
    }

    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);

    printf("Numbers written to DATA.txt and separated into ODD.txt and EVEN.txt successfully!\n");

    return 0;
}
