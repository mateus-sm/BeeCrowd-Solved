#include <stdio.h>

int main() {

    int i = 1, j = 7, x = 0;
    int flagj = 1, flagi = 1;

    while (x <= 14) {

        printf("I=%d J=%d\n", i, j);
        
        switch (flagj) {
            case(1):
                j = j - 1;
                flagj = 2;
                break;

            case(2):
                j = j - 1;
                flagj = 3;
                break;

            case(3):
                j = j + 4;
                flagj = 1;
                break;
         
            default:
                break;
        }

        switch (flagi) {
            case(1):
                i = i;
                flagi = 2;
                break;

            case(2):
                i = i;
                flagi = 3;
                break;

            case(3):
                i = i + 2;
                flagi = 1;
                break;

            default:
                break;
        }

        x++;
    }

    return 0;
}