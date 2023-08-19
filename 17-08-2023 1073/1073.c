#include <stdio.h>
 
int main() {
 
    int n, i, a;

    scanf("%d", &n);

    for(i = 2; i <= n; i++) {

        a = i * i;
        printf("%d^2 = %d\n", i, a);
        i++;
    }
 
    return 0;
}