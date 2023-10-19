#include <stdio.h>

int main() {
    char letraA = 'A';
    char letraB = 'B';
    char letraC = 'C';
    char letraD = 'D';
    char letraE = 'E';

    printf(" %7c\n", letraA);

    printf(" %6c", letraB);
    printf("%2c\n", letraB);

    printf(" %5c", letraC);
    printf("%4c\n", letraC);

    printf(" %4c", letraD);
    printf("%6c\n", letraD);

    printf(" %3c", letraE);
    printf("%8c\n", letraE);

    printf(" %4c", letraD);
    printf("%6c\n", letraD);

    printf(" %5c", letraC);
    printf("%4c\n", letraC);

    printf(" %6c", letraB);
    printf("%2c\n", letraB);

    printf(" %7c\n", letraA);

    return 0;
}
