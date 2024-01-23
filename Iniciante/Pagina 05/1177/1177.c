#include <stdio.h>
 
int main() {
 
    int entrada, i, j;

    scanf("%d", &entrada);

    for (i = 0, j = 0; i < 1000; i++) {
        printf("N[%d] = %d", i , j);

        if (j == entrada) {
            j = 0;
        }
    }
 
    return 0;
}