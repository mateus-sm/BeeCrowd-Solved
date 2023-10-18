#include <stdio.h>

int main() {
    int x = 1, y = 2;
       
    while (x != y) {
        scanf("%d %d", &x, &y);
        
        if (x == y) {
            return 0;
        }
        
        if (x > y) {
            printf("Decrescente\n");
        } else {
            printf("Crescente\n"); 
        }
    }

    return 0;
}