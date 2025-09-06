#include <stdio.h>

int main() {
    int num, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits of the number:\n");

    // If number is 0
    if (num == 0) {
        printf("0\n");
    } else {
        // Extract digits from right to left
        int rev = 0, temp = num;
        while (temp > 0) {
            rev = rev * 10 + (temp % 10); // reverse number
            temp /= 10;
        }

        // Print digits in correct order
        while (rev > 0) {
            digit = rev % 10;
            printf("%d\n", digit);
            rev /= 10;
        }
    }

    return 0;
}
