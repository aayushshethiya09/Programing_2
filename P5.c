#include <stdio.h>

int main() {
    int i, n, num = 1;

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d Odd Numbers:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", num);
        num += 2; 
    }

    return 0;
}