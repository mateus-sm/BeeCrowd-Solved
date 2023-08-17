#include <stdio.h>
 
int main() {
 
    int hi, mi, hf, mf, ht, mt;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    //calcula horas
    ht = (hf - hi + 24) % 24;

    //tratar 24 horas
    if (hf == hi) {
        ht = 24;

        //nem sempre horas iguais significam 24 horas
        //no caso de jogos que começaram 1 e 2 e foram até 1 e 3 o algoritmo estava acusando 24 horas
        if (mf - mi > 0){
            ht = 0;
        }
    }

    //calcula minutos
    mt = (mf - mi + 60) % 60;

    //quando o minuto inicial é maior que o final os minutos implicam uma hora a menos
    if (mf < mi ) {
        mt = 60 + (mf - mi);
        if (ht > 0) {
            ht--;    
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ht, mt);

    
    return 0;
}
/*
    //1.1
    //formula faz com que horas iguais que resultariam em 24 horas de 0, entao
    //se as horas forem iguais entao hora final recebe 24
    //minutos precisam ser diferentes de 0 pois esses casos denotam jogos de menos de uma hora
    //if (hf == hi && (mf > 0 || mi > 0)) {
    //    ht = 24;
    //}

    //se um jogo tem 24 horas os minutos precisam ser zerados pois o maximo de tempo aceito é 24horas
    //if (hf == 24) {
    //    mf = 0;
    //}





    //1.0
    if (hf == 0 && hi == 0){
        ht = 0;
    }


    //horas iguais
    if (hf == hi) {
        ht = 24;
    }
    //horas iguais valendo 0
    if (hf == 0 && hi == 0) {
        ht = 0;
    }
    //hora final maior q hora inicial
    if (hf > hi) {
        ht = hf - hi;
    }
    //hora final menor q hora inicial
    if (hf < hi) {
        ht = 24 + (hf - hi);
    }
    
    //minutos iguais
    if (mf == mi) {
        mt = 0;
    }
    //minuto final maior q minuto inicial
    if (mf > mi) {
        mt = mf - mi;
    }
    //minuto final menor q minuto inicial, menos de 60min implica 1hr a menos
    if (mf < mi ) {
        mt = 60 + (mf - mi);
        if (ht > 0) {
            ht--;    
        }
        
    }
*/
