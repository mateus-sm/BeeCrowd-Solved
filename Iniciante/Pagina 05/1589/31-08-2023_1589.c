#include <stdio.h>

void repeticao() {
    int total, r1, r2;

    scanf("%d %d", &r1, &r2);
    total = r1 + r2;
    printf("%d\n", total);
    fflush(stdin);
}

void casos() {
    int numcasos, i;
    scanf("%d", &numcasos);

    for (i = 0; i < numcasos; i++) {
        repeticao();
    }
}

int main() {
    casos();
    return 0;
}