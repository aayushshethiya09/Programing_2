#include <stdio.h>

int main() {
    int i, num = 1;

    printf("First 10 Odd Numbers:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", num);
        num += 2; 
    }

    return 0;
}