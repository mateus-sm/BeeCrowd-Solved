#include <stdio.h>

int main() {
    int nota1, nota2, media;

    scanf("%d", &nota1);
    scanf("%d", &media);

    nota2 = (media * 2) - nota1; 

    printf("%d\n", nota2);

    return 0;
}