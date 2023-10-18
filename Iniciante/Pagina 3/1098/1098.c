#include <stdio.h>

int main() {
    int i, j;

    for (i = 0; i <= 10; i += 2) {
        for (j = 1; j <= 3; j++) {
            //tres primeiras linhas
            if (i == 0) {
                printf("I=%d J=%d\n", 0, j);
            } else {
                //tres ultimas linhas
                if (i == 10) {
                    printf("I=%d J=%d\n", 1, j + 1);
                //linhas do meio
                } else {
                    printf("I=%d.%d J=%d.%d\n", 0, i % 10, j, i % 10);
                }
            }   
        }
    }

    
    for (i = 0; i <= 10; i += 2) {
        for (j = 2; j <= 4; j++) {
            //tres primeiras linhas
            if (i == 0) {
                
            } else {
                //tres ultimas linhas
                if (i == 10) {
                    printf("I=%d J=%d\n", 2, j + 1);
                //linhas do meio
                } else {
                    printf("I=%d.%d J=%d.%d\n", 1, i % 10, j, i % 10);
                }
            }   
        }
    }
    
    return 0;
}
