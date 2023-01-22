#include <stdio.h>
#include <stdlib.h>

//Criando a soma  de dois numeros.
//Em C o resultado de calculos sempre � do mesmo tipo do maio operando.
//Para evitar lixo de mem�ria, pode usar a funcao ffush(stdin)

int main(void){
	int n1, n2;
	float media;
	
	printf("Digite o primeiro numero: \n");
		fflush(stdin);
			scanf("%d", &n1);
	printf("Digite o segundo numero: \n");
		fflush(stdin);
			scanf("%d",&n2);
	media = (n1 + n2) / 2.0; 
	printf("A media e: %f", media);
}
