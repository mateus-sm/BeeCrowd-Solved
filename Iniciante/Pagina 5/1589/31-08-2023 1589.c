
#include <stdio.h>

int main() {
    int total, casos, r1, r2, i;
    
    scanf("%d", &casos);
    
    for (i = 0; i < casos; i++) {
        scanf("%d %d", &r1, &r2);
        total = r1 + r2;
        printf("%d\n", total);
        fflush(stdin);
    }
    
    //for (i = 0; i < casos; i++) {
    //    total = (r1[i] + r1[i] + r2[i] + r2[i]) / 2;
    //    printf("%d\n", total);
    //}
    
    return 0;
}