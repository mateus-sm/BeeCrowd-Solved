#include <stdio.h>
 
int main() {
 
    int k, cur, boi, boto, map, iara, a, b, c, d, e;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    cur = a * 300;
    boi = b * 1500;
    boto = c * 600;
    map = d * 1000;
    iara = e * 150;
    
    k = cur + boi + boto + map + iara + 225;
    
    printf("%d\n", k);
    
 
    return 0;
}