#include <stdio.h>
 
int main() {
 
    double nota1, nota2, nota3, nota4, notaexame, media, mediafinal;

    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 4 + nota4 * 1) / 10;

    if (media >= 5.0) {
        if (media >= 7.0) {
            printf("Media: %.1lf\n", media);
            printf("Aluno aprovado.\n");            
        } else {
            scanf("%lf", &notaexame);

            mediafinal = (media + notaexame) / 2;

            if (mediafinal >= 5.0) {
                printf("Media: %.1lf\n", media);
                printf("Aluno em exame.\n");
                printf("Nota do exame: %.1lf\n", notaexame);
                printf("Aluno aprovado.\n");
                printf("Media final: %.1lf\n", mediafinal); 
            } else {
                printf("Media: %.1lf\n", media);
                printf("Aluno em exame.\n");
                printf("Nota do exame: %.1lf\n", notaexame);
                printf("Aluno reprovado.\n");
                printf("Media final: %.1lf\n", mediafinal);
            }
        }
    } else {
        printf("Media: %.1lf\n", media);
        printf("Aluno reprovado.\n");
    }

    return 0;
}