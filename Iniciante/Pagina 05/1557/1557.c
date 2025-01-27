#include <stdio.h>
#include <math.h>

int main(void) {
    int TL;

    scanf("%d", &TL);

    while(TL != 0) {
        int mat[TL][TL];

        for (size_t linha = 0; linha < TL; linha++) {
            for (size_t coluna = 0; coluna < TL; coluna++) {
                mat[linha][coluna] = pow(2, coluna + linha);
            }
        }
        
        for(size_t linha = 0; linha < TL; linha++) {
            printf("%3.d", mat[linha][0]);
            for(size_t coluna = 1; coluna < TL; coluna++) {
                printf("%4.d", mat[linha][coluna]);
            }
            puts("");
        }

        puts("");
        scanf("%d", &TL);
    }

    return 0;
}