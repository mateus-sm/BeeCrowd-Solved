#include <stdio.h>
#include <stdlib.h>

int main() {
    int A, B, C, maiorAB;

    scanf("%d", &A); 
    scanf("%d", &B); 
    scanf("%d", &C);

    //"abs() mostra o valor modular da operaçao"
    maiorAB = ((A + B + abs(A - B)) / 2);

    if (maiorAB > C) {
        printf("%d eh o maior\n", maiorAB);
    } else {
        printf("%d eh o maior\n", C);
    }

}