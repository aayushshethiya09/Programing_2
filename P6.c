#include <stdio.h>

int main() {
    int s1, s2, s3, total;
    float avg;

    
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &s1, &s2, &s3);

   
    total = s1 + s2 + s3;
    avg = total / 3.0;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", avg);

    
    if (s1 < 35 || s2 < 35 || s3 < 35) {
        printf("Result = Fail (because one or more subjects < 35)\n");
    } else {
       
        if (avg >= 70)
            printf("Result = Distinction\n");
        else if (avg >= 60)
            printf("Result = First Class\n");
        else if (avg >= 50)
            printf("Result = Second Class\n");
        else if (avg >= 35)
            printf("Result = Third Class\n");
        else
            printf("Result = Fail\n");
    }
}