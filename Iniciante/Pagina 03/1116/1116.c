#include <stdio.h>
 
int main() {
 
    int casos, i;
    double val1, val2;

    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
        scanf("%lf %lf", &val1, &val2);

        if (val2 == 0) {
            printf("divisao impossivel\n");
        } else {
            printf("%.1lf\n", val1 / val2);
        }

    }

    return 0;
}