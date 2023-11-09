#include <stdio.h>
 
int main() {
 
    int i = 0;
    double nota, total = 0;

    while (i < 2) {
        scanf("%lf", &nota);

        if (nota < 0 || nota > 10) {
            printf("nota invalida\n");
        } else {
            total += nota;
            i++;
        }

    }
    
    total = total / 2;
    printf("media = %.2lf\n", total);
 
    return 0;
}