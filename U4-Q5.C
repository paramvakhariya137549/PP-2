



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp1, *fp2;
    char str[200];
    int len, i;


    fp1 = fopen("greencity.txt", "w");
    if (fp1 == NULL) {
        printf("Error opening greencity.txt for writing!\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    fputs(str, fp1);
    fclose(fp1);

   

    fp1 = fopen("greencity.txt", "r");
    if (fp1 == NULL) {
        printf("Error opening greencity.txt for reading!\n");
        return 1;
    }
    fgets(str, sizeof(str), fp1);
    fclose(fp1);



    len = strlen(str);
    

    if (str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }



    fp2 = fopen("cleancity.txt", "w");
    if (fp2 == NULL) {
        printf("Error opening cleancity.txt for writing!\n");
        return 1;
    }

    for (i = len - 1; i >= 0; i--) {
        fputc(str[i], fp2);
    }

    fclose(fp2);

    printf("String written to greencity.txt and reversed string saved in cleancity.txt\n");

    return 0;
}
