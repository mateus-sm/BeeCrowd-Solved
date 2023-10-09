#include <stdio.h>
 
int main() {
 
    int x, y, somax = 0, somay = 0, total = 0;

    scanf("%d %d", &x, &y);

    if (x > y) {
        while (x > y) {
            if (y % 2 != 0) {
                total += y;
            }
            ++y;
        }
    } else {
        while (y > x) {
            if (x % 2 != 0) {
                total += x;
            }
            ++x;
        }
    }

    printf("%d\n", total);
 
    return 0;
}