#include <stdio.h>

int main() {

    int p1, p2, c1, c2, a1, a2;

    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
    
    a1 = p1 * c1;
    a2 = p2 * c2;

    if (a1 == a2) {
        printf("0\n");
    } else if (a1 > a2) {
        printf("-1\n");
    } else {
        printf("1\n");
    }

    return 0;
}