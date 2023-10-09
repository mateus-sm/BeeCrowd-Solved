#include <stdio.h>

int main()
{
    int n, i, k = 1, j = 2, l = 3;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("%d %d %d PUM\n", k, j, l);
        k = k + 4;
        j = k + 1;
        l = k + 2;
    }
    
    return 0;
}