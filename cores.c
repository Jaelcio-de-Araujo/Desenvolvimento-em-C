#include <stdio.h>
#include <stdlib.h>


//Trabalahndo com switch

int main(void){
    char letra;

    printf("Digite uma letra: ");
        scanf("%c", &letra);

    switch (letra){
    case 'a':
        printf("A cor e azul.");
        break;
    case 'b':
        printf("A cor e branco.");
        break;
    default:
        printf("A cr esta errada.");
        break;
    }
    system("pause");
	return 0;

}
