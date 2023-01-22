#include <stdio.h>
#include <stdlib.h>

//Função passando por valor.

//Prototipo de Função.
void calcularExpressao(int, float*);


int main(void){
    int termos;
    float s;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &termos);

    calcularExpressao(termos, &s);

    printf("s = %f", s);
    system("pause");
    return 0;
}


//==================Função de calculo===================//
void calcularExpressao(int termos, float *res){
    int i, numerador=1,denominador=2;

    if(termos == 0)
        *res=0;
    else
        *res=1;
    for(i=2;i<=termos;i++){
        if(i % 2 == 0)
            *res += (numerador * 1.0) /denominador;
        else
            *res -= (numerador * 1.0) /denominador;
        numerador += 2;
        denominador *= 2;
    } 
}