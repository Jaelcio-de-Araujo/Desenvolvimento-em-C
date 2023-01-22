// 	 Sintese
//   objetivo "A01E10 - Jogo da velha"
//   autor "Edson F. da Fonseca"
//   data "11/08/2020"
#include <stdio.h>
#include <stdlib.h>

void mostrarVelha(char[3][3]);
int verificarVelha(char[3][3], char);

int main(void) {
	char valor, tabuleiro[3][3]={' '};
	int l, c, jogada=1;
	
	do {
		mostrarVelha(tabuleiro);
		if (jogada%2 == 0)
			valor = 'X';
		else
			valor = 'O';
		printf("Digite a linha do %c.: ", valor);
		scanf("%d", &l);
		printf("Digite a coluna do %c: ", valor);
		scanf("%d", &c);
		tabuleiro[l-1][c-1] = valor;
		jogada++;
	} while ((jogada < 10) && (!verificarVelha(tabuleiro, valor)));
	mostrarVelha(tabuleiro);
	if (verificarVelha(tabuleiro, 'X'))
		printf("Vencedor = X");
	else {
		if (verificarVelha(tabuleiro, 'O'))
			printf("Vencedor = O");
		else
			printf("Deu velha!");
	}
	
	return 0;
}

void mostrarVelha(char tab[3][3]) {
	printf("\n1 -  %c | %c | %c \n", tab[0][0], tab[0][1], tab[0][2]);
	printf("    ---+---+---\n");
	printf("2 -  %c | %c | %c \n", tab[1][0], tab[1][1], tab[1][2]);
	printf("    ---+---+---\n");
	printf("3 -  %c | %c | %c \n", tab[2][0], tab[2][1], tab[2][2]);
	printf("     1   2   3\n\n");
}

int verificarVelha(char tab[3][3], char v) {
	if ((tab[0][0]==v) && (tab[0][1]==v) && (tab[0][2]==v))
		return 1;
	if ((tab[1][0]==v) && (tab[1][1]==v) && (tab[1][2]==v))
		return 1;
	if ((tab[2][0]==v) && (tab[2][1]==v) && (tab[2][2]==v))
		return 1;
	
	if ((tab[0][0]==v) && (tab[1][0]==v) && (tab[2][0]==v))
		return 1;
	if ((tab[0][1]==v) && (tab[1][1]==v) && (tab[2][1]==v))
		return 1;
	if ((tab[0][2]==v) && (tab[1][2]==v) && (tab[2][2]==v))
		return 1;
	
	if ((tab[0][0]==v) && (tab[1][1]==v) && (tab[2][2]==v))
		return 1;
	if ((tab[0][2]==v) && (tab[1][1]==v) && (tab[2][0]==v))
		return 1;
	
	return 0;
}