#include <stdio.h>
#include <stdlib.h>

int main(void){
    int nNumero, dDividendo, qDivisor;
    int menor,i;
    scanf("%d %d %d", &nNumero, &dDividendo, &qDivisor);

    if(dDividendo < qDivisor)
        menor = dDividendo;
    else
        menor = qDivisor;

    if((dDividendo%menor == 0) && (qDivisor%menor == 0)){
        dDividendo /= menor;
        qDivisor   /= menor;
    }
    for(i=(menor/2)+1;i>=2;i--){
        if((dDividendo% i == 0) && (qDivisor%i== 0)){
        dDividendo /= i;
        qDivisor   /= i;
    }
    }
    if ((dDividendo <=nNumero) && (qDivisor <=nNumero))
        printf("%d %d", dDividendo, qDivisor);
    else
        printf("IMPOSSIVEL");
        system("pause");
    return 0;
}