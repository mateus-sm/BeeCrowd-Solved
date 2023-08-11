#include <stdio.h>

int main() {
    int cha, a, b, c, d, e, count = 0;

    scanf("%d", &cha);
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    
    if (cha == a) {
        count++;
    }
    if (cha == b) {
        count++;
    }
    if (cha == c) {
        count++;
    }
    if (cha == d) {
        count++;
    }
    if (cha == e) {
        count++;
    }
    
    printf("%d\n", count);
    //printf("%d %d %d %d %d %d", cha, a, b, c, d, e);

    return 0;
}