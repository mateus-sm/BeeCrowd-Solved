#include <stdio.h>
 
int main() {
    int km; 
    double hora, kmPhora;

    scanf("%d", &km);
    scanf("%lf", &hora);

    kmPhora = km / hora;

    printf("%.3lf km/l\n", kmPhora);
      
    return 0;
}