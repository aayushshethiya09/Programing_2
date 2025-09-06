#include <stdio.h>

int main() {
    int i, num = 2;

    printf("First 10 Even Numbers:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", num);
        num += 2; // move to next even number
    }

    return 0;
}