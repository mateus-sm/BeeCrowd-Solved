#include <stdio.h>
 
int main() {
 
    int numero, contador1, contador2, contador3;
    int i, g = 1;

    scanf("%d", &numero);

    for (i = 0; i < numero; i++ ) {

        contador1 = g;
        contador2 = g*g;
        contador3 = g*g*g;

        printf("%d %d %d\n", contador1, contador2, contador3);

        g++;
    }
 
    return 0;
}