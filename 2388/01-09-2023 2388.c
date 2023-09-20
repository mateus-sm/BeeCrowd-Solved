#include <stdio.h>
 
int main() {
 
    int i, casos, total = 0, a, b;

    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
        scanf("%d %d", &a, &b);
        total += a * b;
    }

    printf("%d\n", total);
 
    return 0;
}