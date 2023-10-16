#include <stdio.h>
 
int main() {
 
    double a, b, c;
    int flag;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a > b && a > c) {
        flag = 1;
    } else { 
        if (b > a && b > c) {
        flag = 2;    
       } else {
           flag = 3;
       }
    }

    switch (flag) {
        case (1):
        if (a >= b + c) {
            printf("NAO FORMA TRIANGULO\n");
            return 0;
        }
        if ((a * a) == (b * b + c * c)) {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((a * a) > (b * b + c * c)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((a * a) < (b * b + c * c)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && a == c) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((a == b && a != c && b != c) || (a == c && a != b && c != b) || (b == c && b != a && c != a)) {
            printf("TRIANGULO ISOSCELES\n");
        }        
        break;
        
        case (2):
        if (b >= a + c) {
            printf("NAO FORMA TRIANGULO\n");
            return 0;
        }
        if ((b * b) == (a * a + c * c)) {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((b * b) > (a * a + c * c)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((b * b) < (a * a + c * c)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && a == c) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((a == b && a != c && b != c) || (a == c && a != b && c != b) || (b == c && b != a && c != a)) {
            printf("TRIANGULO ISOSCELES\n");
        }        
        break;
        
        case (3):
        if (c >= b + c) {
            printf("NAO FORMA TRIANGULO\n");
            return 0;
        }
        if ((c * c) == (b * b + a * a)) {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((c * c) > (a * a + b * b)) {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((c * c) < (a * a + b * b)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && a == c) {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((a == b && a != c && b != c) || (a == c && a != b && c != b) || (b == c && b != a && c != a)) {
            printf("TRIANGULO ISOSCELES\n");
        }        
        break;
    }


    return 0;
}