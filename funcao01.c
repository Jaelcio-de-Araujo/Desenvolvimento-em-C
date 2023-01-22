#include <stdio.h>
#include <stdlib.h>

//Prototipo da função
int somaInteiros(int,int);

int main(void){
int n1, n2, resultado;

printf("Digite o primeiro numero: ");
   scanf("%d", &n1);
printf("Digite o segundo numero: ");
   scanf("%d", &n2);

resultado = somaInteiros(n1,n2);
printf("%d", resultado);

return 0;
}

//=================================Função de soma===============//
int somaInteiros(int n1, int n2){
   int res;
   res = n1 + n2;
   return res;
}