#include <stdio.h>
#define TF 60 

int main() {
 
    unsigned long long int fib[TF];
    int i, casos, num;

    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i <= TF; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
        scanf("%d", &num);

        printf("Fib(%d) = %llu\n", num, fib[num]);
    }
 
    return 0;
}