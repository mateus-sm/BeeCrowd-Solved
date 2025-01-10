#include <stdio.h>

int main(void) {
    int T, aux = 0;
    int N[1000];

    scanf("%d", &T);

    for (int i = 0; i < 1000; i++) {
        N[i] = aux++;
        
        if (aux == T) {
            aux = 0;
        }
        
    }

    for (int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    //system("pause");

    return 0;
}