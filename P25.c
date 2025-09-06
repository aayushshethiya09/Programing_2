#include <stdio.h>

int main() {
    int num, rev = 0, digit, temp;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;  
   
    if (temp < 0) {
        printf("%d is not a palindrome (negative numbers are not considered).\n", num);
        return 0;
    }

    
    while (temp > 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    
    if (num == rev) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}