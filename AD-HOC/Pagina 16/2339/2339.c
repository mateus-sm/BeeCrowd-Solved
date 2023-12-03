#include <stdio.h>

int main() {

    int comp, folhas, requisitos;

    scanf("%d %d %d", &comp, &folhas, &requisitos);

    if ((folhas / requisitos) >= comp) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }

    return 0;
}