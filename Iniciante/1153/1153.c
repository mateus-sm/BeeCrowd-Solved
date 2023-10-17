#include <stdio.h>
#include <math.h>

int main(){
    int N;

    scanf("%d", &N);
    
    switch (N) {
        case 1:
        printf("%d\n", N);
        break;

        case 2:
        N = N * (N-1);
        printf("%d\n", N);
        break;

        case 3:
        N = N * (N-1) * (N-2);
        printf("%d\n", N);
        break;

        case 4:
        N = N * (N-1) * (N-2) * (N-3);
        printf("%d\n", N); 
        break;

        case 5:
        N = N * (N-1) * (N-2) * (N-3) * (N-4);
        printf("%d\n", N);
        break;

        case 6:
        N = N * (N-1) * (N-2) * (N-3) * (N-4) * (N-5);
        printf("%d\n", N);
        break;

        case 7:
        N = N * (N-1) * (N-2) * (N-3) * (N-4) * (N-5) * (N-6);
        printf("%d\n", N);
        break;

        case 8:
        N = N * (N-1) * (N-2) * (N-3) * (N-4) * (N-5) * (N-6) * (N-7);
        printf("%d\n", N);
        break;

        case 9:
        N = N * (N-1) * (N-2) * (N-3) * (N-4) * (N-5) * (N-6) * (N-7) * (N-8);
        printf("%d\n", N);
        break;

        case 10:
        N = N * (N-1) * (N-2) * (N-3) * (N-4) * (N-5) * (N-6) * (N-7) * (N-8) * (N-9);
        printf("%d\n", N);
        break;

        case 11:
        N = N * (N-1) * (N-2) * (N-3) * (N-4) * (N-5) * (N-6) * (N-7) * (N-8) * (N-9) * (N-10);
        printf("%d\n", N);
        break;

        case 12:
        N = N * (N-1) * (N-2) * (N-3) * (N-4) * (N-5) * (N-6) * (N-7) * (N-8) * (N-9) * (N-10) * (N-11);
        printf("%d\n", N);
        break;
    }

    return 0;
}