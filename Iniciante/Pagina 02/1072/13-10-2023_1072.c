#include <stdio.h>

int main() {
    int casos, teste, in;
    int i, j;

    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
        scanf("%d", &teste);

        for (j = 10; j < 20; j++) {
            if (teste == j) {
                in++;
                break;
            }
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", abs(casos - in));

}