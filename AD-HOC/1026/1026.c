#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define TF 32

void conversor(unsigned int num, unsigned int vet[TF]) {
    for (int i = 0; num > 0; i++) {
        vet[i] = num % 2;
        num = num / 2;
    }
}

void zerar(unsigned int vet[TF]) {
    for (int i = 0; i < TF; ++i) {
        vet[i] = 0;
    }
}

void print(unsigned int vet[TF]) {
    for (int i = 0; i < TF; i++) {
        printf("%d", vet[i]);
    }
    printf("\n");
}

int main() {
    unsigned int num1 = 1, num2 = 1, total = 0;
    unsigned int vet1[TF] = {0}, vet2[TF] = {0}, vet3[TF] = {0};
    int i, j;

    while (scanf("%u %u", &num1, &num2) != EOF) {
        zerar(vet1);
        zerar(vet2);
        //print(vet1);
        //print(vet2);

        conversor(num1, vet1);
        conversor(num2, vet2);
        //print(vet1);
        //print(vet2);

        //efetua xor e prenche em vet3
        for (i = 0; i < TF; i++){
            if (vet1[i] == vet2[i]) {
                vet3[i] = 0;
            } else {
                vet3[i] = 1;
            }
        }
        //print(vet3);
        
        //converte em decimal
        for(int i = 0, j = 0, total = 0; i < 32; i++,j++){
            total += vet3[i] * (pow(2, j));
        }
        printf("%u\n", total);
        
    }

    return 0;
}