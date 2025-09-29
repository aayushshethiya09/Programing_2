#include <stdio.h>

int main() {
    int i, n = 5;  
    
    for (i = 1; i <= 3; i++) {
        int j = n - i + 1;
        printf("%d %d\n", i, j);
        printf("%d %d\n", i, j);  
    }
    
    return 0;
}
