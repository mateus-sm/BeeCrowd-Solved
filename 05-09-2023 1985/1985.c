#include <stdio.h>
 
int main() {
 
    int casos, produto, quantidade; 
    double total = 0;
    int i = 0;

    scanf("%d", &casos);

    while (i < casos) {

        scanf("%d %d", &produto, &quantidade);

        switch (produto) {
            case 1001:
                total += 1.50 * quantidade;
                break;
            case 1002:
                total += 2.50 * quantidade;
                break;
            case 1003:
                total += 3.50 * quantidade;
                break;
            case 1004:
                total += 4.50 * quantidade;
                break;
            case 1005:
                total += 5.50 * quantidade;
                break;
            
            default:
                break;
        }

        i++;
    }

        printf("%.2lf\n", total);

    return 0;
}