#include <stdio.h>
 
int main() {
 
    int a, b, inicio, fim, total = 0;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b) {
        fim = a;
        inicio = b;
    } else {
        fim = b;
        inicio = a;
    }

    for (; inicio <= fim; inicio++) {
        if (inicio % 13 != 0) {
            total += inicio;
        }
    }

    printf("%d\n", total);
 
    return 0;
}