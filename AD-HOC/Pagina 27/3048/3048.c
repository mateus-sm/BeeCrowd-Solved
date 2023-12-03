#include <stdio.h>
 
int main() {
 
    int casos, numeroatual, total = 0, auxiliar, flag = 0;
    int i;

    scanf("%d", &casos);

    for (i = 0; i < casos; i ++) {
        scanf("%d", &numeroatual);

        if (flag == 0) {
            if (numeroatual == 1 || numeroatual == 2) {
                total++;
                auxiliar = numeroatual;
                flag = 1;
            }
        }

        if (flag == 1) {
            if (numeroatual != auxiliar) {
                total++;
                auxiliar = numeroatual;
                flag = 1;
            }
        }
        
    }

    printf("%d\n", total);

    return 0;
}