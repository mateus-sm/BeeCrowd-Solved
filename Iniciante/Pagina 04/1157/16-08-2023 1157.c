#include <stdio.h>

int main() {
    int n, a, i;
    
    scanf("%d", &n);
    a = n;
    
    for (i = 1; i <= n; i++) {
        if (a % i == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}