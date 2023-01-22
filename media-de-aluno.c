#include <stdio.h>
#include <stdlib.h>

//Linguagem inperativa: Assembly, definimos usando comando diretos.
//Estruturada: Permite estrtura.
//Procedural: Permite estruturas, ex funcoes.

//Calculador de notas(media)
int main(void){
	
	float n1, n2, media;
	printf("Digite uma nota..: ");
		scanf(" %f", &n1);
	printf("Digite outra nota..: ");
		scanf(" %f", &n2);

	media = ((n1 + n2) / 2.0);
	printf("A media do aluno e: %.1f \n", media);

if((media >= 3) && (media < 5))
	printf("Recuperacao\n");
else{
	if(media >= 5){
		printf("Aprovado\n");
	}
	else{
		printf("Reprovado\n");
	}
}
	system("pause");
	return 0;
}

