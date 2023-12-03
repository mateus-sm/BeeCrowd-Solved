#include <stdio.h>
 
int main() {
 
    int k;
    
    scanf("%d", &k);
    
    if (k > 50) {
        printf("Top 100\n");
    }
    if (k <= 50 && k > 25) {
        printf("Top 50\n");
    }
    if (k <= 25 && k > 10) {
        printf("Top 25\n");
    }
    if (k <= 10 && k > 5) {
        printf("Top 10\n");
    }
    if (k <= 5 && k > 3) {
        printf("Top 5\n");
    }
    if (k <= 3 && k > 1) {
        printf("Top 3\n");
    }
    if (k == 1) {
        printf("Top 1\n");
    }
 
    return 0;
}