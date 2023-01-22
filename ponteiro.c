#include <stdio.h>
#include <stdlib.h>



int main(void){
    int *valor;
    int idade;

    valor = &idade;

    printf("Digite sua idade: ");
        scanf("%d", &idade);

    printf("A sua idade e: %d", valor);
}