#include <stdio.h>

int main() {
    int i, n = 5;
    
    for (i = 1; i <= n; i++) {
        printf("%d %d\n", i, n - i + 1);
    }
    
    return 0;
}
