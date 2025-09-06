#include <stdio.h>

int main() {
    int i, boys = 0, girls = 0;
    char code;

    printf("Enter sex code for 50 students (M for boy, F for girl):\n");

    for (i = 1; i <= 50; i++) {
        scanf(" %c", &code);  

        if (code == 'M' || code == 'm')
            boys++;
        else if (code == 'F' || code == 'f')
            girls++;
        else {
            printf("Invalid code for student %d. Skipping...\n", i);
        }
    }

    printf("\nTotal Boys  = %d\n", boys);
    printf("Total Girls = %d\n", girls);

    return 0;
}