#include <stdio.h>

int main() {
    int i, j;
    int n = 3;   // you can change n to any number
    
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d %d\n", i, j);
        }
    }
    
    return 0;
}
