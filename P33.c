#include <stdio.h>
#include <math.h>

int main() {
    int num, sq, digits, lastDigits;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    sq = num * num;

   
    digits = 0;
    int temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

   
    int divisor = pow(10, digits);
    lastDigits = sq % divisor;

   
    if (lastDigits == num) {
        printf("%d is an Automorphic number.\n", num);
    } else {
        printf("%d is not an Automorphic number.\n", num);
    }

    return 0;
}