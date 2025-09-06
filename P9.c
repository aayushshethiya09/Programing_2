#include <stdio.h>

int main() {
    int n, sum = 0, i, num = 2;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

   
    for (i = 1; i <= n; i++) {
        sum += num;
        num += 2;  
    }

    printf("Sum of first %d even numbers = %d\n", n, sum);

    return 0;
}