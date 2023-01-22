#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    int nCompetidores, pMinPontos, xFase1, yFase2,i, qtd=0;
    scanf("%d %d", &nCompetidores, &pMinPontos);
        for (i=0; i <nCompetidores; i++){
            scanf("%d %d",&xFase1, &yFase2);
            if(xFase1 + yFase2 >= pMinPontos){
                qtd++;
            }
        }
printf("%d", qtd);
return 0;
system("pause");
}