#include <stdio.h>
 
int main() {
    int A, B, C, flag = 0;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    if (A < B && A < C) {
        printf("%d\n", A);
        flag = 1;
    } else if (B < A && B < C) {
        printf("%d\n", B);
        flag = 2;
    } else {
        printf("%d\n", C);
        flag = 3;
    }

    if (flag == 1){
        if (B < C) {
            printf("%d\n", B);
            printf("%d\n\n", C);
        } else {
            printf("%d\n", C);
            printf("%d\n\n", B);
        }
    }

    if (flag == 2){
        if (A < C) {
            printf("%d\n", A);
            printf("%d\n\n", C);
        } else {
            printf("%d\n", C);
            printf("%d\n\n", A);
        }
    }

    if (flag == 3){
        if (A < B) {
            printf("%d\n", A);
            printf("%d\n\n", B);
        } else {
            printf("%d\n", B);
            printf("%d\n\n", A);
        }
    }

    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);

 
    return 0;
}