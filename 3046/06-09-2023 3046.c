#include <stdio.h>
 
int main() {
 
    int numero, total;

    scanf("%d", &numero);

    total = ((numero + 1) * (numero + 2)) / 2;

    printf("%d\n", total);
 
    return 0;
}