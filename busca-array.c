// Sintese
//   objetivo "A01E08 - Soma da diagonal principal de uma matriz."
//   autor "Edson F. da Fonseca"
//   data "05/04/2020"
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char matriz[5][3]; // L x C
	char caracter;
	int l, c, achei=0;
	
	for (l=0; l<5; l++) {
		for (c=0; c<3; c++) {
			printf("Matriz [%d,%d]: ", l+1, c+1);
			fflush(stdin);
			scanf("%c", &matriz[l][c]);
		}
	}
	printf("Caracter: ", l+1, c+1);
	fflush(stdin);
	scanf("%c", &caracter);
	
	for (l=0; l<5; l++) {
		for (c=0; c<3; c++) {
			if (matriz[l][c] == caracter)
				achei = 1;
		}
	}
	
	if (achei)
		printf("Aparece");
	else
		printf("Nao aparece");
	
	return 0;