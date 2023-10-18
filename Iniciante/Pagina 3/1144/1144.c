#include <stdio.h>
 
int main() {
 
    int i, j, k, a = 1, b, c, flagA = 1, flagB = 0, flagC = 0;
    
    scanf("%d", &k);
    
    j = k * 2;
    
    for (i = 1; i <= j; i++) {
        
        switch (flagA) {
            case (0):
                a = a + 1;
                flagA = 2;
                break;
                
            case (1):
                a = a;
                flagA = 2;
                break;
                
            case (2):
                a = a;
                flagA = 0;
                break;
        }
        
        switch (flagB) {
            case (0):
            b = a * a;
            flagB = 1;
            break;
            
            case (1):
            b = (a * a) + 1;
            flagB = 0;
            break;
        }
       
        switch (flagC) {
            case (0):
            c = a * b;
            flagC = 1;
            break;
            
            case (1):
            c = c + 1;
            flagC = 0;
            break;
        }
        
        printf("%d %d %d\n", a, b, c);
    }
    
    return 0;
}