#include <stdio.h>
#include <string.h>
 
int main() {
 
    char leitura1[50], leitura2[50], leitura3[50];

    scanf("%s", leitura1);

    if (strcmp(leitura1, "vertebrado") == 0) {
        scanf("%s", leitura2);
        if (strcmp(leitura2, "ave") == 0) {
            scanf("%s", leitura3);
            if(strcmp(leitura3, "carnivoro") == 0){
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            scanf("%s", leitura3);
            if(strcmp(leitura3, "onivoro") == 0){
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        scanf("%s", leitura2);
        if (strcmp(leitura2, "inseto") == 0) {
            scanf("%s", leitura3);
            if (strcmp(leitura3, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            scanf("%s", leitura3);
            if (strcmp(leitura3, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }
 
    return 0;
}