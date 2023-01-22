#include <stdio.h>

int main(void){
    
    //Declaração da estrutura.
    struct{
        char nome[20];
        char sexo;
        int idade;
        float peso;
    } pessoa;

    //Atribuição de valores.
    pessoa.sexo = 'M';
    pessoa.peso = 75.4;


}