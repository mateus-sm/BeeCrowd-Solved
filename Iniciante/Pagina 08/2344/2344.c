#include <stdio.h>
 
int main() {
 
    int k;
    
    scanf("%d", &k);
    
    if (k >= 86) {
        printf("A\n");
    }
    if (k <= 85 && k > 61) {
        printf("B\n");
    }
    if (k <= 60 && k > 36) {
        printf("C\n");
    }
    if (k <= 35 && k > 1) {
        printf("D\n");
    }
    if (k == 0) {
        printf("E\n");
    }
 
    return 0;
}