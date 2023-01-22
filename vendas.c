#include <stdio.h>
// C Básico - Aula 5: Variável composta homogênea - vetor
#define ATENDENTES 5

int main(void){
    int vendas[ATENDENTES], total = 0, i;
    float media;

    for(i=0; i<ATENDENTES; i++){
        printf("\nDigite as vendas do %d : ", i+1);
        scanf("%d", &vendas[i]);
        total += vendas[i];
    }
        media = total / (ATENDENTES * 1.0);
        printf("\nTotal de vendas: %d :", total);
        printf("\nMedia de vendas: %f :", media);

    for (i=0; i<ATENDENTES; i++){
        if (vendas[i] < media){
            printf("\nVendas do %d : ", i+1);
            printf("\nVendas abaixo da media: %d ", i+1);
        }
    }
    
system("pause");
}