#include <stdio.h>
 
int main() {
 
    int i, j = 1, k;
    
    scanf("%d", &k);
    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", j, k, j * k);
        j++;
    }
    
    return 0;
}