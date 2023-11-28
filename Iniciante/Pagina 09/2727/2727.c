#include <stdio.h>
#include <string.h>
#define TF 150

int main() {
    int numcasos;
    int TL;
    int pontos = 0, espacos = 0, conjuntos = 0, trios = 0, conjuntos_possiveis = 0;
    int valor_ASCII;
    char str[TF], letra_ASCII;

    while (scanf("%d", &numcasos) != EOF) {
        
        // Ler até o \n
        scanf(" %[^\n]", str);
        TL = strlen(str);

        pontos = 0; 
        espacos = 0;
        conjuntos = 0; 
        
        for (int i = 0; i < TL; i++) {
            // Descobrir os componentes da string
            if (str[i] == '.') {
                pontos++;
                trios++;
            } else {
                espacos++;
                trios = 0;
            }

            if (trios == 3) {
                conjuntos++;
                trios = 0;
            }
        }
        
        // Descobrir conjuntos possiveis
        conjuntos_possiveis = 0;
        for (int j = 0; j < espacos; j++) {
            if (j == 0) {
                conjuntos_possiveis = 2;
            } else {
                conjuntos_possiveis++;
            }
        }
        
        // Somar dados para obter valor ASCII
        valor_ASCII = 0;
        if (pontos > conjuntos_possiveis && pontos < conjuntos_possiveis * 3) {
            valor_ASCII += (espacos * 1);
        }

        if (pontos == conjuntos_possiveis) {
            valor_ASCII += (espacos * 2);
        }

        valor_ASCII += pontos + 96;
        letra_ASCII = (char)valor_ASCII;

        printf("%c\n", letra_ASCII);

        /*
        //prints de teste
        printf("pontos = %d\n", pontos);
        printf("espacos = %d\n", espacos);
        printf("conjuntos = %d\n", conjuntos);
        printf("conjuntos possiveis = %d\n", conjuntos_possiveis);
        printf("Se pontos forem unicos em cada conjunto formula: ASCII = 96 + pontos + espacos * 2\n");
        printf("Se pontos forem duplas em cada conjunto formula: ASCII = 96 + pontos + espacos\n");
        printf("Se pontos forem trios em cada conjunto formula: ASCII = 96 + pontos\n");
        printf("numero da letra = %d, valor da letra: %c\n", valor_ASCII, valor_ASCII);
        puts(str); 
        */   
    }
    
    return 0;
}