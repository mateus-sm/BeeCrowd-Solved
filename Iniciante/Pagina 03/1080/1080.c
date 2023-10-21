#include <stdio.h>

int main(){
    int i, num, maior, pos, flag;

    for (i = 0; i <= 100; i++) {
        scanf("%d", &num);
        
        if (flag == 1) {
            maior = num;
            flag = 0;
        } else {
            if (num > maior) {
                maior = num;
                pos = i + 1;
            }
        }
    }

    printf("%d\n", maior);
    printf("%d\n", pos);

    return 0;
}