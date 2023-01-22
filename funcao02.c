#include <stdio.h>
#include <stdlib.h>

//Função passando por valor.

//Prototipo de Função.
float calcularExpressao(int);


int main(void){
    int termos;
    float s;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &termos);

    s = calcularExpressao(termos);

    printf("s = %f", s);
    system("pause");
    return 0;
}


//==================Função de calculo===================//
float calcularExpressao(int termos){
    int i, numerador=1,denominador=2;
    float res=1;
    if(termos == 0)
        return 0;
    for(i=2;i<=termos;i++){
        if(i % 2 == 0)
            res += (numerador * 1.0) /denominador;
        else
            res -= (numerador * 1.0) /denominador;
        numerador += 2;
        denominador *= 2;
    }
    return res;
}