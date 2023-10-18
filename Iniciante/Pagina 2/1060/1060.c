#include <stdio.h>
#include <math.h>

int main(){
    double n1, n2, n3, n4, n5, n6;
    int x;
    x = 0;

    scanf("%lf %lf %lf %lf %lf %lf", &n1, &n2, &n3, &n4, &n5, &n6);
    
    if (n1 > 0) {
        (x = x + 1);
    } 
    if (n2 > 0) {
        (x = x + 1);
    } 
    if (n2 > 0) {
        (x = x + 1);
    }
    if (n3 > 0) {
        (x = x + 1);
    } 
    if (n4 > 0) {
        (x = x + 1);
    } 
    if (n5 > 0) {
        (x = x + 1);
    }
    if (n6 > 0) {
        (x = x + 1);
    }
   
    printf("%d valores positivos\n", x);
    
    return 0;
}