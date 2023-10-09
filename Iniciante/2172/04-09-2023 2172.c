#include <stdio.h>
 
int main() {
 
    int multiplicador, xp, total = 1;

    while (total != 0) {

        scanf("%d %d", &multiplicador, &xp);
        if(multiplicador == 0 && xp == 0) {
            return 0;
        } else {
            total = multiplicador * xp;
            printf("%d\n", total); 
        }

    }
 
    return 0;
}