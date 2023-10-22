#include <stdio.h>
 
int main() {
 
    int a, b, inicio, fim;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a > b) {
        fim = a;
        inicio = b + 1;
    } else {
        fim = b;
        inicio = a + 1;
    }

    for (; inicio < fim; inicio++) {
        if (inicio % 5 == 2 || inicio % 5 == 3) {
            printf("%d\n", inicio);
        }
    }
 
    return 0;
}