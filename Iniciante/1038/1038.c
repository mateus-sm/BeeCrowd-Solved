#include <stdio.h>
 
int main() {
    double c1 = 4.00, c2 = 4.50, c3 = 5.00, c4 = 2.00, c5 = 1.50, total;
    int cas, multi;

    scanf("%d", &cas);
    scanf("%d", &multi);
    
    switch (cas){
    case 1:
        total = c1 * multi;
        break;
    case 2:
        total = c2 * multi; 
        break;
    case 3:
        total = c3 * multi; 
        break;
    case 4:
        total = c4 * multi; 
        break;
    case 5:
        total = c5 * multi; 
        break;
    }

    printf("Total: R$ %.2lf\n", total);

 
    return 0;
}