#include <stdio.h>
 
int main() {
 
    int alcool = 0, gasolina = 0, diesel = 0, condicional;

    scanf("%d", &condicional);

    while (condicional != 4) {
        switch (condicional){
            case 1:
            alcool++;
            break;

            case 2:
            gasolina++;
            break;

            case 3:
            diesel++;
            break;
        
            default:
            break;
        }

        scanf("%d", &condicional);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

 
    return 0;
}