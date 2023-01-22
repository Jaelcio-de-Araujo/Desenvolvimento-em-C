// Sintese
//   objetivo "CRUD de produtos (codigo, descricao e valor)"
//   autor "Edson F. da Fonseca"
//   data "01/04/2020"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//*** Declaracoes de constantes ************************************************
#define TAM 10

//*** Declaracoes de tipos *****************************************************
struct tProduto {
	int codigo;
	char descricao[30];
	float valor;
};

//*** Prototipos de funcoes ****************************************************
int menu(void);

//*** Bloco Principal **********************************************************
int main(void) {
	int opcao, codigo, i, qtdProdutos=0;
	struct tProduto produtos[TAM];
	
	do {
        opcao = menu();
        switch (opcao) {
               case 1: 
                    printf("\n\n*** Inclusao ***\n\n");
                    if (qtdProdutos < TAM) {
                    	printf("Digite o codigo...: ");
                    	scanf("%d", &produtos[qtdProdutos].codigo);
                    	printf("Digite a descricao: ");
                    	fflush(stdin);
                    	gets(produtos[qtdProdutos].descricao);
                    	printf("Digite o valor....: ");
                    	scanf("%f", &produtos[qtdProdutos].valor);
                    	qtdProdutos++;
					}
					else
						printf("Vetor cheio!\n");
	                break;
               case 2: 
                    printf("\n\n*** Consulta ***\n\n");
	                break;
               case 3: 
                    printf("\n\n*** Listagem ***\n\n");
                    for (i=0; i<qtdProdutos; i++)
                    	printf("%d - %s - %.2f\n", produtos[i].codigo, produtos[i].descricao, produtos[i].valor);
	                break;
               case 4: 
                    printf("\n\n*** Alteracao ***\n\n");
	                break;
               case 5: 
                    printf("\n\n*** Exclusao ***\n\n");
	                break;
        }
    } while (opcao != 0);
	return 0;
}

//*** Menu *********************************************************************
int menu(void) {
    int op;
    printf("\n\n*** MENU ***\n\n");
    printf("1. Inclusao\n");
    printf("2. Consulta\n");
    printf("3. Listagem\n");
    printf("4. Alteracao\n");
    printf("5. Exclusao\n");
    printf("0. Sair\n\n");
    printf("Escolha sua opcao: ");
    scanf("%d", &op);
    return op;
}

//*** FIM **********************************************************************